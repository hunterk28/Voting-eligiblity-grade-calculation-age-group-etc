//Kamil Saeed

#include<iostream>
using namespace std;

int main()

{
                //Program for a library that calculates late fees for borrowed books
		
		int   days;
		float fee;
		
		cout<<"Enter Number of Late Days :";
		cin>>days;
		
		if (days<=7)
		{
		fee=(days*0.50);
		cout<<"Your Late Fee(IN DOLLARS) is :"<<fee<<endl;
		}
		
		else if (days>=8 && days<=14)
		{
		fee=(days*1.00);
		cout<<"Your Late Fee(IN DOLLARS) is :"<<fee<<endl;
		}
		
		else if (days>=15 && days<=21)
		{
		fee=(days*2.00);
		cout<<"Your Late Fee(IN DOLLARS) is :"<<fee<<endl;
		}
		
		else 
		{
		fee=(days*3.00);
		cout<<"Your Late Fee(IN DOLLARS) is :"<<fee<<endl;
		}
		
	return 0;
	
}
