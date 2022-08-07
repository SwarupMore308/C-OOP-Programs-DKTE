#include<iostream>
#include<iomanip>
#include "product.h"

using namespace std;

int main(){
	int n;
	int id,quantity;
	double price,total,discount;
	float gst;
	string name;

	cout<<"Enter Total Number of Product you want to insert: ";
	cin>>n;
	product pobj[n];
	for(int i=0;i<n;i++){
		cout<<"\nEnter Product Details: \n";
		cout<<"ID: ";
		cin>>id;
		pobj[i].setid(id);
		cout<<"Name: ";
		cin>>name;
		pobj[i].setname(name);
		cout<<"Price: ";
		cin>>price;
		pobj[i].setprice(price);
		cout<<"Quantity: ";
		cin>>quantity;
		pobj[i].setquantity(quantity);
		cout<<"Discount: ";
		cin>>discount;
		pobj[i].setdiscount(discount);
		cout<<"GST(%): ";
		cin>>gst;
		pobj[i].setgst(gst);
		cout<<setw(60)<<left<<setfill('-')<<"\n";
	}
	cout<<setw(40)<<left<<setfill('.')<<endl;
	
	//Display List
	cout<<setw(5)<<left<<setfill(' ')<<"ID"<<setw(15)<<left<<setfill(' ')<<"NAME"<<setw(10)<<left<<setfill(' ')<<"PRICE"<<setw(10)<<left<<setfill(' ')<<"QUANTITY"<<setw(10)<<left<<setfill(' ')<<"DISCOUNT"<<setw(10)<<left<<setfill(' ')<<"GST"<<endl;
	cout<<setw(60)<<left<<setfill('-')<<"\n"<<endl;
	for(int i=0;i<n;i++){
		cout<<setw(5)<<left<<setfill(' ')<<pobj[i].getid()<<setw(15)<<left<<setfill(' ')<<pobj[i].getname()<<setw(10)<<left<<setfill(' ')<<fixed<<setprecision(2)<<pobj[i].getprice()<<setw(10)<<left<<setfill(' ')<<pobj[i].getquantity()<<setw(10)<<left<<setfill(' ')<<pobj[i].getdiscount()<<setw(6)<<left<<setfill(' ')<<pobj[i].getgst()<<setw(1)<<"%"<<endl;
	}
	cout<<setw(60)<<left<<setfill('-')<<"\n"<<endl;
	cout<<"                    "<<"\u2660 VISIT AGAIN \u2660"<<endl;
	cout<<setw(60)<<left<<setfill('-')<<"\n"<<endl;
	return 0;
}

