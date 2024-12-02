/*
Example: WAP to create class name as Power with two function 
void setBaseIndex(int base,int index): this function can accept two values base and index
int getPower(): this function can calculate power of number and return it.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class power
{
	private:
	int base,index,p=1;
	public:
	
	void setbaseindex(int b , int i)
	{
		base=b;
		index=i;	
	}	
	int getpower()
	{
	 	for(int i=1;i<=index;i++)
	 	{
	 		p = base * p;
		}
		return p;
	}
};
	int main()
	{	
	   power p1;
	   int base,index;
	   cout<<"\n enter  a base & index \n";
	   cin>>base>>index;
	   p1.setbaseindex(base,index);
	   int result = p1.getpower();
	   cout<<"\n Power is "<<result;	   
	}