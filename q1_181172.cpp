// lab 1 revision q1.cpp : Defines the entry point for the console application.
//
#include <iostream>
using namespace std;


int main()
{
	int number=0,tempor=0;
	cout<<"enter the size:";
	cout<<endl;
	cin>>number;
	tempor=number*2;
	for(int a=1,b=0,c=tempor-1;a<=number;a++,b++,c--)
	{
		for(int z=0; z<tempor; z++)
		{
			if((z<=b) || (z>=c))
			{
				cout<<a;
			}
			else
				cout<<"*";
			
		
		}
		cout<<endl;

	}
	for (int i = 1; i < number; i++)
	{
		for (int j = 0; j < number-i; j++)
			cout << i + number;
		for (int j = 0; j < 2*i; j++)
			cout << "*";
		for (int j = 0; j < number - i; j++)
			cout << i + number;

		cout << endl;
	}
	




	return 0;

}