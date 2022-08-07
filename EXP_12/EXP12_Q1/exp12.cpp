#include<iostream>

using namespace std;

class Date{
	private:
		int day,month,year;
	public:
		Date();
		int setDate(int,int,int);
};

Date::Date(){
	this->day = 00;
	this->month = 00;
	this->year = 00;
}

int Date::setDate(int d, int m, int y){
	
	if(d<0 || d>31 ){
		throw d;
		return 1;
	}	
	if(m<0 || m>12){
		throw 'm';
		return 1;
	}
		this->day = day;
		this->month = month;
		this->year = year;
		return 0;

}

int main(){
	int d,m,y,returned;
	cout<<"Enter Date(dd-mm-yyyy): ";
	cin>>d;
	cin.ignore(1,'-');
	cin>>m;
	cin.ignore(1,'-');
	cin>>y;
	Date date;
	try{
		date.setDate(d,m,y);
		if(returned == 0){
			cout<<"DATE ACCEPTED"<<endl;	
		}
		
	}
	catch(int d){
		cout<<"-----EXCEPTION OCCURED-----"<<endl;
		cout<<"ENTERD INVALID DAY"<<endl;
	}
	catch(char ch){
		cout<<"-----EXCEPTION OCCURED------"<<endl;
		cout<<"ENTERED INVALID MONTH"<<endl;
	}
	return 0;
}
