#include<iostream>
#include "date.h"
using namespace std;
date::date(){
	day = 00;
	month = 00;
	year = 0000;	
}
date::date(int d,int m,int y){
	day = d;
	month = m;
	year = y;
} 

int date::check(int day,int month,int year){
	if(day<1||day>31){
		return -1;
	}
	else if(month<1||month>12){
		return -2;
	}
	else if(year<=0){
		return -3;
	}
	return 0;		
}

int date::sedate(int day, int month, int year){
	int r = check(day,month,year);
	if(r==0){
		this->day = day;
		this->month = month;
		this->year = year;
		return 0;
	}
	return r;
}


void date::difference(date d2,int dates[]){
		year=d2.year-year;
		if(d2.month<month){
			d2.month+=12;
			year-=1;	
		}	
		
		month = d2.month-month;
		//cout<<"\n "<<diff.year<<" "<<diff.month;
		if(day>d2.day){
			d2.day=d2.day+dates[month-1];
			month-=1;
		}		
		day=d2.day-day;
}

void date::increment(int dates[]){
	day+=1;
	if((year%4)==0){
		if(month==2){
			if(day>(dates[1]+1)){
				day=1;
				month+=1;	
			}
		}
		else if(day>dates[month-1]){
			day=1;
			month+=1;
		}
	}
	else if(day>dates[month-1]){
		day=1;
		month+=1;
	}
	if(month>12){
		month=1;
		day=1;
		year+=1;	
	}
	if(month>12){
		month=1;
		day=1;
		year+=1;	
	}
			
	
}

//void date::setday(int day){
//	this->day=day;
//}

//void date::setmonth(int month){
//	this->month = month;
//}

//void date::setyear(int year){
//	this->year = year;
//}

int date::getday(){
	return day;
}

int date::getmonth(){
	return month;
}

int date::getyear(){
	return year;
}
