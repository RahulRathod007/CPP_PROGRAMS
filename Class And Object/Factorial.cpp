/*
Example: WAP to create class name as Factorial with two functions 
void setValue(): this function accept number as parameter 
int getFact(): this function can calculate factorial of number and return it.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class factorial
{
	private:
	int no,i,f=1;
	public:
	
	void setvalue()
	{
		cout<<"\n enter a number \n";
		cin>>no;
	}
	int getfact()
	{
		for(i=1;i<=no;i++)
		{
		  	f = f*i;	
		}
		cout<<"\n Factorial is "<<f;
	}
};
 int main()
 {
 	 factorial f;
 	 f.setvalue();
 	 f.getfact();
 }