//WAP to input number and calculate its factorial using C++
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int no,f=1;
	cout<<"enter a no";
	cin>>no;
	for(int i=1;i<=no;i++)
	{
		f = f * i;
	}
//	for(int i=0;i<=no;i++)
//	{
//		f = f * no;
//		no--;
//	}
	cout<<"factorial is "<<f;
	return 0;
}