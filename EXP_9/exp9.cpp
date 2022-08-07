#include<iostream>
#include"Matrix.h"

using namespace std;


int main()
{
	matrix m3,m4,m5;
	int ch;
	/*m3.getmatrix();
	m4.getmatrix();

	m3.printMatrix();
	m4.printMatrix();*/

	cout<<"enter  first matrix"<<endl;
	cin>>m3;

	cout<<"enter  Second matrix"<<endl;
	cin>>m4;

	cout<<"first matrix :"<<endl;
	cout<<m3;
	
	cout<<"Second matrix :"<<endl;
	cout<<m4;
	
	do
	{
		cout<<"Enter Choice \n 1.Addition \n 2. Substraction \n 3. Multiplication \n 4.Division \n";
		cin>>ch;
	
		switch(ch)
		{

			case 1 :
					cout<<"Addition is: ";
					m5=m3+m4;
					cout<<m5;
					break;
			case 2 :
					m5=m3-m4;
					cout<<m5;
					break;
			case 3 :
					m5=m3*m4;
					cout<<m5;
					break;
			case 4 :
					m5=m3/m4;
					cout<<m5;
					break;
		}
	
	}while(ch<5);

	return 0;
}

