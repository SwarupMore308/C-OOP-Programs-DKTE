#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	string mName;
	int nTicket;
	double price,gAmt,donated,netS,nChild,tChild,nAdult,tAdult,totalChild,totalAdult;
	float per;

	cout<<"Enter Following data: "<<endl;
	cout<<"Movie Name: ";
	getline(cin, mName);
	//cout<<"Enter Number of ticket sold: ";
	//cin>>nTicket;
	cout<<"Enter total child tickets and price of Child Ticket: ";
	cin>>nChild>>tChild;
	cout<<"Enter total adult tickets and price of adult Ticket: ";
	cin>>nAdult>>tAdult;	
	cout<<"How many percente you want to donate: ";
	cin>>per;
	
	
	nTicket = nChild+nAdult;
	totalChild = tChild*nChild;
	totalAdult = tAdult*nAdult;
	gAmt=totalChild+totalAdult;
	donated = (gAmt/100)*per;
	netS=gAmt-donated;

	cout<<"_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl;
	cout<<setw(40)<<left<<setfill('.')<<"Movie Name: "<<" "<<mName<<endl;
	cout<<setw(40)<<left<<setfill('.')<<"Number of Ticket Sold: "<<setw(12)<<setfill(' ')<<right<<nTicket<<endl;
	cout<<setw(40)<<left<<setfill('.')<<"Gross Amount: "<<" $"<<fixed<<setprecision(2)<<setw(10)<<setfill(' ')<<right<<gAmt<<endl;
	cout<<setw(40)<<left<<setfill('.')<<"Percentage of Gross Amount Donated:"<<setw(12)<<setfill(' ')<<right<<per<<setw(1)<<"%"<<endl;
	cout<<setw(40)<<left<<setfill('.')<<"Amount Donated: "<<" $"<<setw(10)<<setfill(' ')<<right<<donated<<endl;
	cout<<setw(40)<<left<<setfill('.')<<"Net Sale: "<<" $"<<setw(10)<<setfill(' ')<<right<<netS<<endl;
	
	return 0;	
}

