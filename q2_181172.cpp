// lab 1 revision q2.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <fstream>
using namespace std;

int power(int x, int y)
{
	int a=x;
	for(int j=1;j<y;j++)
	{
		x=x*a;
	}

	return x;
}
int main()
{
	int elements, a, x, y;


	ifstream fin("input.txt");
	ofstream fout("output.txt");
	cout<<"the number of elements are:"<<endl;
	fin>>a;
	cout<<a;
	cout<<endl;

	for(int i=0;i<a;i++)
	{
		fin>>x;
		fin>>y;
		cout<<power(x,y);
		cout<<endl;
		fout<<power;
	}



	return 0;
}
