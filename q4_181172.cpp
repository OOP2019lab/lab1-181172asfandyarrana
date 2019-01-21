// lab 1 q2.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


int main()
{
	int size;

	cout<<"enter the size of the array:"<<endl;
	cin>>size;
	int *array= new int[size];
	cout<<"enter elements"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>array[i];

	}
	for(int b=0;b<size;b++)
	{
	for(int a=0; a<size-1; a++)
	{
		int k=0;
		if(array[a]>array[a+1])
		{
			k=array[a+1];
			array[a+1]=array[a];
			array[a]=k;
		}
	}
	}
	for(int i=0;i<size;i++)
	{
		cout<<array[i];

	}


	return 0;

}
