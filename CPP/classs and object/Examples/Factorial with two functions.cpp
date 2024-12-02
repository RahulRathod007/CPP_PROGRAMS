#include<iostream>
using namespace std;

class Factorial
{
	public :
	int f;
	int no;
	
	void setValue(int x)	
	{
		no = x;
	}
	
	int getFact()
	{
		f = 1;
		for(int i = 1; i<=no;i++)
		{
			
			f *= i;
		}
		return f;
	}
};

	int main()
	{
		int num;
		cout<<"\n Enter Number : ";
		cin>>num;
		
		Factorial fact;
		
		fact.setValue(num);
		int result = fact.getFact();
		cout<<"\n Factorial is a : "<<result;
	}
