// lab 1 oop.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	int *p;
	int *q;
	int *r;
	x=44;
	y=55;
	p=&x;
	q=&y;

	cout<<"The value of x is:"<<endl;
	cout<<x;
	cout<<endl;
	cout<<"The value of y is:"<<endl;
	cout<<y;
	cout<<endl;
	cout<<"The value of p is:"<<endl;
	cout<<p;
	cout<<endl;
	cout<<"The value of q is:"<<endl;
	cout<<q;
	cout<<endl;
	cout<<"The value of *p is:"<<endl;
	cout<<*p;
	cout<<endl;
	cout<<"The value of *q is:"<<endl;
	cout<<*q;
	cout<<endl;
		cout<<endl;
			cout<<endl;

	z=x;
	x=y;
	y=z;

	cout<<"The value of x is:"<<endl;
	cout<<x;
	cout<<endl;
	cout<<"The value of y is:"<<endl;
	cout<<y;
	cout<<endl;
	cout<<"The value of p is:"<<endl;
	cout<<p;
	cout<<endl;
	cout<<"The value of q is:"<<endl;
	cout<<q;
	cout<<endl;
	cout<<"The value of *p is:"<<endl;
	cout<<*p;
	cout<<endl;
	cout<<"The value of *q is:"<<endl;
	cout<<*q;
	cout<<endl;
		cout<<endl;
			cout<<endl;

	r=p;
	p=q;
	q=r;

	cout<<"The value of x is:"<<endl;
	cout<<x;
	cout<<endl;
	cout<<"The value of y is:"<<endl;
	cout<<y;
	cout<<endl;
	cout<<"The value of p is:"<<endl;
	cout<<p;
	cout<<endl;
	cout<<"The value of q is:"<<endl;
	cout<<q;
	cout<<endl;
	cout<<"The value of *p is:"<<endl;
	cout<<*p;
	cout<<endl;
	cout<<"The value of *q is:"<<endl;
	cout<<*q;
	cout<<endl;
		cout<<endl;
			cout<<endl;

	return 0;


}

