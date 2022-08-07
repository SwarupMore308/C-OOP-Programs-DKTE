#include<iostream>
#include"Line.h"

using namespace std;

class Circle{
    int cx;
    int cy;
    double radius;
    double area;
    double cerf;
    
    public:
        Circle();
        Circle(int,int,double);
        double getArea();
        double getCerf();
        int isTangent(int ,int );
        int isTangent(int ,int ,int ,int );
        int isTangent(Line);
};
