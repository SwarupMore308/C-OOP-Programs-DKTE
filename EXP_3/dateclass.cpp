#include<iostream>
#include<stdlib.h>
#include<string.h>
#include "date.h"
using namespace std;
int dates[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int main(){
	int d,m,y,val,inchoice =1;
	while(1){
		cout<<"Enter date(dd-mm-yyyy): ";
		cin>>d;
		cin.ignore(1,'-');
		cin>>m;
		cin.ignore(1,'-');
		cin>>y;
		date d1;
		val=d1.sedate(d,m,y);
		if(val==0){
			cout<<"Date Accepted."<<endl;
		}
		else if(val==-1){
			cout<<"Insert Valid Day (1-31):";
			break;
		}
		else if(val==-2){
			cout<<"Insert Valid Month (1-12):";
			break;
		}
		else if(val==-3){
			cout<<"Insert Valid Year : ";
			break;
		}
		
		//Date format display
		
		cout<<"Date in different format: \n"<<"dd-mm-yyyy: ";
		if(d1.getday()<10){
			cout<<"0"<<d1.getday();
		}
		else{cout<<d1.getday();}	
		cout<<"-";
		if(d1.getmonth()<10){
			cout<<"0"<<d1.getmonth();
		}
		else{cout<<d1.getmonth();}
		cout<<"-"<<d1.getyear()<<endl;
		cout<<"\ndd-MMM-yyyy: ";	
		if(d1.getday()<10){
			cout<<"0"<<d1.getday();
		}
		else{cout<<d1.getday();}	
		cout<<"-";
			
		switch(d1.getmonth()){
			case 1:
				cout<<"JAN";	
				break;
			case 2:
				cout<<"FEB";	
				break;
			case 3:
				cout<<"MAR";	
				break;
			case 4:
				cout<<"APR";	
				break;
			case 5:
				cout<<"MAY";	
				break;
			case 6:
				cout<<"JUN";	
				break;
			case 7:
				cout<<"JUL";	
				break;
			case 8:
				cout<<"AUG";	
				break;
			case 9:
				cout<<"SEP";	
				break;
			case 10:
				cout<<"OCT";	
				break;
			case 11:
				cout<<"NOV";	
				break;
			case 12:
				cout<<"DEC";	
				break;
		}
		cout<<"-"<<d1.getyear()<<endl;
	
		cout<<"\n dd/mm/yyyy: ";
		if(d1.getday()<10){
			cout<<"0"<<d1.getday();
		}
		else{cout<<d1.getday();}	
		cout<<"/";
		if(d1.getmonth()<10){
			cout<<"0"<<d1.getmonth();
		}
		else{cout<<d1.getmonth();}
		cout<<"/"<<d1.getyear()<<endl;
		
		//Difference
		date d2;
		do{
			cout<<"Enter Today date(dd-mm-yyyy): ";
			cin>>d;
			cin.ignore(1,'-');
			cin>>m;
			cin.ignore(1,'-');
			cin>>y;
			val=d2.sedate(d,m,y);
			if(val==0){
				cout<<"Date Accepted."<<endl;
			}
			else if(val==-1){
				cout<<"Insert Valid Day (1-31):"<<endl;
				continue;
			}
			else if(val==-2){
				cout<<"Insert Valid Month (1-12):"<<endl;
				continue;
			}
			else if(val==-3){
				cout<<"Insert Valid Year : "<<endl;
				continue;
			}
		}while(val!=0);
		d1.difference(d2,dates);
		if(d1.getyear()<10){
			cout<<"0"<<d1.getyear()<<" years ";
		}
		else{cout<<d1.getyear()<<" years ";}	
		
		if(d1.getmonth()<10){
			cout<<"0"<<d1.getmonth()<<" Months ";
		}
		else{cout<<d1.getmonth()<<" Months ";}
		cout<<d1.getday()<<" Days"<<endl;
		do{
			cout<<"Enter 1 to increment day by 1: ";
			cin>>inchoice;
			d2.increment(dates);
			if(d2.getday()<10){
				cout<<"0"<<d2.getday();
			}
			else{cout<<d2.getday();}	
			cout<<"-";
			if(d2.getmonth()<10){
				cout<<"0"<<d2.getmonth();
			}
			else{cout<<d2.getmonth();}
			cout<<"-"<<d2.getyear()<<endl;
			
		}while(inchoice == 1);
		
	return 0;
	}
}

