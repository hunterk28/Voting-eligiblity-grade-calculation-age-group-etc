//Kamil Saeed

#include<iostream>
using namespace std;

int main()

{
                //Program to tell if a year is leapyear or not
		
		int year;
		int leapyear;
		
		cout<<"Enter a Year :";
		cin>>year;
		
		leapyear=(year%4);
		
		if (leapyear==0)
		cout<<"It's Leapyear"<<endl;
		
		else if (year%100==0|| year%400==0)
		cout<<"It's Leapyear"<<endl;
		
		else
		cout<<"It's not a Leapyear"<<endl;
		
	return 0;
	
}
