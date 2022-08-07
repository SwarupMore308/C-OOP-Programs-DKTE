#include<iostream>
#include<stdlib.h>
#include"Complex.h"

using namespace std;


int main()
{
	int r,i,choice;
	while(1){
		complex c1,c2,c3;
		cout<<"enter 1st real and imaginary no:";
		cin>>r>>i;
		c1.setreal(r);
		c1.setimg(i);
		cout<<"enter 2nd real and imaginary no:";
		cin>>r>>i;
		c2.setreal(r);
		c2.setimg(i);	
		c3=c1+c2;
		c3.getimg();
		c3.getreal();
		cout<<"after addition\n";
		c3.display();
		c3=c1-c2;
		cout<<"after substraction\n";
		c3.display();
		cout<<"Do You Want To Continue? (1.YES/2.NO): ";
		cin>>choice;
		if(choice == 2){
			exit(0);
		}

	}

}
