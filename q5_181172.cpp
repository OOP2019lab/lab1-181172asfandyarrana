// lab 1 q3.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <fstream>
using namespace std;

void offset(int size)
{
	int *arr=new int[size];
	cout<<endl<<"enter elements"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>*(arr+i);

	}
	for(int b=0;b<size;b++)
	{
	for(int a = 0;a<size-1;a++)
	{ int k=0;
		if(*(arr+a)>*(arr+a+1))
		{
			k=*(arr+a+1);
			*(arr+a+1)=*(arr+a);
			*(arr+a)=k;
		}
	}
	}

	ofstream fin("output.txt");
	for(int i=0;i<size;i++)
	{
		fin<<*(arr+i);

	}
}
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
	for(int a = 0;a<size-1;a++)
	{ int k=0;
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

	offset(size);


	return 0;

}

