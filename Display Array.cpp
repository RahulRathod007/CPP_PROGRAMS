//we want to create array of size 5 store values in it and display it.
 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[5];
	cout<<"\n enter a elements of array \n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}
	return 0;
}