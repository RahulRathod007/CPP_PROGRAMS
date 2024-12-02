/*
Example: WAP to create class name as Reverse with two functions 
void setNumber(): this function accept number as parameter from keyboard 
int getReverse(): this function can reverse the number and return it.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Reverse
{
	private:
	int no,rev=0,rem=0;
	public:
	
	void setnumber()
	{
		cout<<"\n Enter a number\n";
		cin>>no;
	}
	int getReverse()
	{
		while(no>0)//(no!=0)
		{
			rem=no%10;
			no = no/10;
			rev=rev*10+rem;
			cout<<"\n Reverse is "<<rev;
		}
	}
};
int main()
{
	Reverse r;
	r.setnumber();
	r.getReverse();
	return 0;
}