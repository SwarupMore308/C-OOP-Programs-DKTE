#include<iostream>
using namespace std;

class matrix
{
	int a[10][10];
	int i,j,r=0;
	int c=0;
	
	public:
		matrix();
		friend void operator <<(ostream &,matrix );
		friend void operator >>(istream &,matrix &);
		int operator==(matrix c1);
		matrix operator+(matrix c1);
		matrix operator-(matrix c1);
		matrix operator*(matrix c1);
		matrix operator/(matrix c1);
};
