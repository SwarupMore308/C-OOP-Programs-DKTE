#include<iostream>
#include"Complex.h"

using namespace std;



complex::complex()
{

	real=0;
	img=0;

}
complex complex::operator +(complex c2)
{
	complex c3;	
	c3.real=real+c2.real;
	c3.img=img+c2.img;
	return c3;
}
complex complex::operator -(complex c2)
{
	complex c3;
	c3.real=real-c2.real;
	c3.img=img-c2.img;
	return c3;
}
void complex::setreal(int x)
{
	real=x;

}
void complex::setimg(int y)
{
	img=y;

}
void complex::getimg()
{
	cout<<"imaginary is :"<<img<<endl;

}
void complex::getreal()
{
	cout<<"real is :"<<real<<endl;

}
void complex::display()
{

cout<<real<<"+"<<img<<"i"<<endl;

}
