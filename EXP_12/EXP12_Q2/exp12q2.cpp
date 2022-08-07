#include<iostream>
#include<string.h>

using namespace std;

class Person{
	string personName;
	int personId;
	public:
		Person();
		void setName(string);
};

Person::Person(){
	this->personName = "";
	this->personId = 00;
}

void Person::setName(string name){
	if(name == "\0" || name == "\n" || name.length() <= 1){
		throw 'n';
	}
	else{
		this->personName = name;
		cout<<"NAME SUCCESSFULLY ENTERED";
	}
}

int main(){
	int id;
	string name;
	char ch;
	cout<<"Enter ID: ";
	cin>>id;
	cin.get(ch);
	cout<<"Enter Name: ";
	cin.get(ch);
	//cin>>name;	
	Person p;
	
	try{
		p.setName(name);
	}
	catch(char ch){
		cout<<"-----EXCEPTION OCCURED-----"<<endl;
		cout<<"YOU HAVE ENTERD INVALID NAME"<<endl;
	}
	return 0;
}
