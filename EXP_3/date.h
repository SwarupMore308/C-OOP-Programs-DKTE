class date{
	private: 
		int month,year,day;	
		//int dates[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	public:
		date();
		date(int ,int ,int );
		int getday();
		int getmonth();
		int getyear();
		int sedate(int,int,int);
		void increment(int []);	
		void difference(date,int []);
		int check(int,int,int);
};
