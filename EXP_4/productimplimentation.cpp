#include<iostream>
#include<string>

#include "product.h"


using namespace std;

product::product(){
	id = 00;
	quantity = 0;
	price = 0.0;
	total = 0.0;
	name = "";
	discount = 0.0;
	gst = 0.0;
}

product::product(int id,string name,int quantity,double price,double discount,float gst){
	this->id = id;
	this->quantity = quantity;
	this->price = price;	
	this->total = 0.0;
	this->name = name;
	this->discount = discount;
	this->gst = gst;
}


void product::setid(int id){
	this->id = id;
}

void product::setname(string name){
	this->name = name;
}

void product::setquantity(int quantity){
	this->quantity = quantity;
}

void product::setprice(double price){
	this->price = price;
}

void product::setdiscount(double discount){
	this->discount = discount;
}

void product::setgst(float gst){
	this->gst = gst;
}


int product::getid(){
	return id;
}

string product::getname(){
	return name;
}

int product::getquantity(){
	return quantity;
}

double product::getprice(){
	return price;
}

double product::getdiscount(){
	return discount;
}
float product::getgst(){
	return gst;
}


