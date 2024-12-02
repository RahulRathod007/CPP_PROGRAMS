/*Exmaple: WAP to create class name as Factorial with two functions 
void setValue (int no): this function accept integer as parameter
int getFactorial (): this function calculate factorial and return it.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class factorial
{
	private:
	int no,f=1;
	public:
	
	void setvalue(int x)
	{
		no = x;
	}
	int getfactorial()
	{
		for(int i=1;i<=no;i++)
		{
			f  = f * i;
		}
			return f;
	}
};
	int main()
	{
		factorial f;
		int no;
		cout<<"\n enter a no \n";
		cin>>no;
		f.setvalue(no);
		int result= f.getfactorial();
		cout<<"\n Fctorial is "<<result;
	}