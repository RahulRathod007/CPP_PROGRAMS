/*
Example: WAP to create class name as Power with two functions
void setValue() : this function accept two values first as base and second as index 
int getPower(): this function calculate power of number and return it.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class power
{
	private:
	int base,index,p=1;
	public:
	
	void setvalue()
	{
		cout<<"\n enter a base and index \n";
		cin>>base>>index;
	}
	void getpower()
	{
		for(int i=1;i<=index;i++)
		{ 
			p = base * p;
		}
		cout<<"Power is "<<p;
	}
};
int main()
{
	power p1;
	p1.setvalue();
	p1.getpower();
}