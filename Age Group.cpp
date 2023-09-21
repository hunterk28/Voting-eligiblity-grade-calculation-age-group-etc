//Kamil Saeed

#include<iostream>
using namespace std;

int main()

{
                //Program to tell in which group you fall by taking age as input
		
		int age;
		
		cout<<"Enter Your Age(0-100):";
		cin>>age;
		
		if (age>0 && age<=12)
		cout<<"Your are a Child"<<endl;
		
		else if (age>=13 && age<=19)
		cout<<"You are a Teenager"<<endl;
		
		else if (age>=18 && age<=64)
		cout<<"You are an Adult"<<endl;
		
		else if (age>=65 && age<=100)
		cout<<"Your are a Senior Citizen"<<endl;
		
		else
		cout<<"Enter valid Age"<<endl;
	
	return 0;
	
}
