#include<iostream>
#include<string>
using namespace std;

class Person{
	string personName;
	public:
		Person();
		Person(string);
		string getPName();
		void setName(string);
};
class Engine{
	string engineName;
	public:
		Engine();
		Engine(string);
		string getName();
		void setName(string);
};	

class Car{
	string carName;
	
	Engine engineObj;
	public:
	int passengerCapacity, passengerCount;
	Person *passenger;
	Person *curp;
		Car(string,Engine);
		string getName();
		void setName(string);
		void addPassenger(Person *p);
};

//IMPLIMENTATION
//PERSON CLASS
Person::Person(){
	this->personName = "";
}

Person::Person(string name){
	this->personName = name;
}

string Person::getPName(){
	return personName;
}

void Person::setName(string name){
	this->personName = name;
}

//ENGINE CLASS

Engine::Engine(){
	this->engineName = "";
}

Engine::Engine(string name){
	this->engineName = name;
}

string Engine::getName(){
	return engineName;
}

void Engine::setName(string name){
	this->engineName = name;
}

//CAR CLASS

Car::Car(string name, Engine e){
	this->carName = name;
	this->passengerCapacity = 4;
	this->passengerCount = 0;
	engineObj = e;
}

string Car::getName(){
	return carName;
}

void Car::setName(string name){
	this->carName = name;
}

void Car::addPassenger(Person *p){
	if(passengerCount<4){
		passenger = p;
		cout<<passenger->getPName();
		passengerCount+=1;
		passengerCapacity-=1;
	}
	else{
		cout<<"Capacity Full";
	}
}

int main(){
	Engine eobj;
	int choice;
	Person pr[4];
	Person *p;
	char ch;
	string ename,pname,cname;	
	cout<<"Enter Car Name: ";
	cin>>cname;
	cout<<"Enter Engine Name: ";
	cin>>ename;
	eobj.setName(ename);
	Car cobj(cname,eobj);	
	cout<<"Do you Want to ADD Passenger? (1.YES/2.NO): ";
	cin>>choice;
	p=&pr[0];
	for(int i=0;i<4;i++){
		cout<<"Enter Name of the Passenger: ";
		cin>>pname;
		pr[i].setName(pname);
		cout<<p->getPName();
		cobj.addPassenger(p);
		cin.get(ch);
		cout<<"---------------------------------------------------------"<<endl;
	}
	cobj.curp = p;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"CAR NAME: "<<cobj.getName()<<endl<<"ENGINE NAME: "<<eobj.getName()<<endl;
	cout<<"Passeger Names: "<<endl;
	for(int i=0;i<cobj.passengerCount;i++){
		cout<<i+1<<". "<<cobj.curp->getPName()<<endl;
		cobj.curp++;
	}
	return 0;
}


