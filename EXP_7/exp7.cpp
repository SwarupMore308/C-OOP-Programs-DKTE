#include<iostream>
#include<stdlib.h>
#include<cmath>
#include"Circle.h"
using namespace std;

int main()
{
	int cx,cy,ch,ch1,flag=0;
	double radius;
	float slope,intercept;
	int x1,y1,x2,y2;
	int X1,Y1,X2,Y2;

	cout<<"Enter radius: ";
	cin>>radius;
	cout<<"Enter co-ordinates of center(x,y): ";
	cin>>cx>>cy;
	Circle c1(cx,cy,radius);
	
	while(1)
	{
		cout<<"1.Area \n2.Cerfcumference\n 3.Line is Tangent?\n 4.Exit"<<endl;
		cin>>ch;

		switch(ch)
		{
			case 1:
				cout<<"Area: "<<c1.getArea()<<endl;
				break;

			case 2:
				cout<<"Cerfcumference: "<<c1.getCerf()<<endl;
				break;

			case 3:
				while(1)
				{
					cout<<"1.Line with slope and intercept \n2.Line with 2 co-ordinates \n3.Line as Class. \n4.Exit."<<endl;
					cin>>ch1;
						switch(ch1)
						{
							case 0:
								flag=1;
								break;

							case 1:
								cout<<"Enter slope of line: ";
								cin>>slope;
								cout<<"Enter y-intercept of line: ";
								cin>>intercept;
								if(c1.isTangent(slope,intercept)==1)
								{
									cout<<"Line with given slope and intercept is Tangent to given Circle."<<endl;
								}
								else
								{
									cout<<"Line is NOT Tangent to Circle."<<endl;
								}
								break;
							
							case 2:
								cout<<"Enter Point1 of line(x1,y1): ";
								cin>>x1>>y1;
								cout<<"Enter Point2 of line(x2,y2): ";
								cin>>x2>>y2;
								if(c1.isTangent(x1,y1,x2,y2)==1)
								{
									cout<<"Line with given coordiantes is Tangent to given Circle."<<endl;
								}
								else
								{
									cout<<"Line is NOT Tangent to Circle."<<endl;
								}
								break;
								
							case 3:
								cout<<"Enter Point1 of line(x1,y1): ";
								cin>>X1>>Y1;
								cout<<"Enter Point2 of line(x2,y2): ";
								cin>>X2>>Y2;
								Line L(X1,Y1,X2,Y2);
								cout<<"Slope of line is: "<<L.getSlope()<<endl;
								cout<<"Intercept of line is: "<<L.getInter()<<endl;
								if(c1.isTangent(L)==1)
								{
									cout<<"Line with given coordiantes is Tangent to given Circle."<<endl;
								}
								else
								{
									cout<<"Line is NOT Tangent to Circle."<<endl;
								}
								break;
							
						}
					if(flag==1)
					{
						break;
					}
				}

			case 4:
				exit(0);

			default:
				cout<<"Enter valid choice."<<endl;
				break;
		}
	}
}
