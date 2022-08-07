#include<iostream>
#include"Matrix.h"

using namespace std;

matrix::matrix()
{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				a[i][j] = 0 ;
			}
		}

}

void operator >> (istream &i, matrix &m)
{
	cout<<"Enter Rows";
	cin>>m.r;
	cout<<"enter columns";
	cin>>m.c;
	cout<<"Enter first matrix";
	for(m.i=0;m.i<m.r;m.i++)
	{
		for(m.j=0;m.j<m.c;m.j++)
		{
			i>>m.a[m.i][m.j];
		}
	

	}


}
void operator << (ostream &o,matrix m)
{
	for(m.i=0;m.i<m.r;m.i++)
	{
		for(m.j=0;m.j<m.c;m.j++)
		{
			o<<m.a[m.i][m.j]<<endl;
		}
	}
}

matrix matrix:: operator+(matrix c1)
{
	//cout<<"Hello 1";
	matrix m1;
	for(i=0;i<r;i++)
	{
		//cout<<"Hello 2";
		for(j=0;j<c;j++)
		{
			m1.a[i][j]=a[i][j]+c1.a[i][j];
			//cout<<""<<m1.a[i][j]<<"\n";
		}
	}
	m1.r=r;
	m1.c=c;

	return m1;
}
matrix matrix:: operator-(matrix c1)
{
	matrix m;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m.a[i][j]=a[i][j]-c1.a[i][j];
		}
	}
	m.r=r;
	m.c=c;
	return m;
}
matrix matrix:: operator*(matrix c1)
{
	matrix m;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m.a[i][j]=a[i][j]*c1.a[i][j];
		}
	}
m.r=r;
	m.c=c;
	return m;
}
matrix matrix:: operator/(matrix c1)
{
	matrix m;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m.a[i][j]=a[i][j]/c1.a[i][j];
		}
	}
m.r=r;
	m.c=c;
	return m;
}

