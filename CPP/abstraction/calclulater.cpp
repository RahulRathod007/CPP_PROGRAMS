#include<iostream>

using namespace std;

class Value
{
	protected:
		int a,b;
		virtual int getResult()= 0;
	
	public:
	int setValue(int x, int y)
	{
		a = x; 
		b = y;
	}
	
};

class Add : public Value
{
	public:
	int getResult()
	{
		int add = a + b;
		return add;
	}
	
};

class Mul : public Value
{
	public:
	int getResult()
	{
		int mul = a * b;
		return mul;
	}
	
};

class Div : public Value
{
	public:
	int getResult()
	{
		int div = a / b;
		return div;
	}
	
};
int main()
{
	int x,y;
	
	cout<<"\n Enter x : ";
	cin>>x;
	
	cout<<"\n Enter y : ";
	cin>>y;
	
	Add a;
	a.setValue(x,y);
	int add = a.getResult();
	cout<<"\n\n Addition is : "<<add;
	
	Mul m;
	m.setValue(x,y);
	int mul = m.getResult();
	cout<<"\n\n Multiplication is : "<<mul;
	
	Div d;
	d.setValue(x,y);
	int div = d.getResult();
	cout<<"\n\n Division is : "<<div;
	
	return 0;
}
