#include<iostream>
#include<cmath>
#include"Circle.h"
using namespace std;

Circle::Circle()
{
	cx=0;
	cy=0;
	radius=0;
}
Circle::Circle(int cx,int cy,double radius)
{
	this->cx=cx;
	this->cy=cy;
	this->radius=radius;
}

double Circle::getArea()
{
	area=3.14*radius*radius;
	return area;
}
double Circle::getCerf()
{
	cerf=2*3.14*radius;
	return cerf;
}

int Circle::isTangent(int slope,int intercept)
{
	double dis=abs((cy-slope*cx-intercept)/sqrt(1+slope*slope));
	if(dis==radius)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int Circle::isTangent(int x1,int y1,int x2,int y2)
{
	double m=(y2-y1)/(x2-x1);
	double c=y1-m*x1;
	double dis=abs((cy-m*cx-c)/sqrt(1+m*m));
	if(dis==radius)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int Circle::isTangent(Line L)
{
	double m=L.getSlope();
	double c=L.getInter();
	double dis=abs((cy-m*cx-c)/sqrt(1+m*m));
	if(dis==radius)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
