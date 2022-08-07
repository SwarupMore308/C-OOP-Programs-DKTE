#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

	string data;
	ifstream infile;
	infile.open("sample.txt");
	char ch;
	int ccount=0,lcount,wcount;
	while(!infile.eof()){	
		ccount++;
		cout<<ccount;
		infile.get(ch);
		cout<<ch;
		
	}
	cout<<"Total Number of character in Sample file is: ";
	cout<<ccount-1z<<endl;
	/*while(infile.eof()){
		infile.get(ch);
		if(ch == ' ')
			wcount++;
		cout<<ch;
		//ccount++;
	}
	cout<<"Number of words in file: ";
	cout<<wcount<<endl;
	
	while(infile.eof()){
		getline(infile,data);
		cout<<data;
		lcount++;
	}
	cout<<"\nNumber of lines in the file: ";
	cout<<lcount;*/
	return 0;
}
