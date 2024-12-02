//WAP to input two values consider first as base and second as index and calculate its power.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int base,index,p=1;
	cout<<"enter a base and index";
	cin>>base>>index;
	for(int i=1;i<=index;i++)
	{
		p = p * base;
	}
	cout<<"power is"<<p;
	return 0;
}