#include<iostream>
#include<cmath>
#include "Circle.h"
using namespace std;

Line::Line()
{
	x1=0;
	y1=0;
	x2=0;
	y2=0;
	slope=0.0;
	intercept=0.0;
}
Line::Line(int x1,int y1,int x2,int y2)
{
	this->x1=x1;
	this->y1=y1;
	this->x2=x2;
	this->y2=y2;
}

int Line::getX1() const
{
	return x1;
}
int Line::getX2() const
{
	return x2;
}
int Line::getY1() const
{
	return y1;
}
int Line::getY2() const
{
	return y2;
}

float Line::getSlope()
{
	slope=(y2-y1)/(x2-x1);
	return slope;
}
float Line::getInter()
{
	intercept=y1-slope*x1;
	return intercept;
}
