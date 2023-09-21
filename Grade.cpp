//Kamil Saeed

#include<iostream>
using namespace std;

int main()

{

		//Program that take your input score and assign you Grade
		
		float x;
		
		cout<<"Enter your score (0-100) :";
		cin>>x;
		
		if (x>=90)
		cout<<"Your have A Grade"<<endl;
		
		else if ((x>=75)&&(x<=89))
		cout<<"You have B Grade"<<endl;
		
		else if ((x>=61)&&(x<=74))
		cout<<"You have C Grade"<<endl;
		
		else if ((x>=51)&&(x<=60))
		cout<<"You have D Grade"<<endl;
		
		else
		cout<<"You have F Grade"<<endl;
	
	return 0;
	
}
