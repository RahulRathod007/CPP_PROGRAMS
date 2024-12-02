#include<iostream>
#include<conio.h>
using namespace std;
class value
{
	protected:
	int a,b;
	public:
	void setvalue(int x,int y)
	{
		a=x;
		b=y;
	}
	virtual int getresult()=0;
};

class add :public value
{
	public:
	int getresult()
	{
	 return a+b;
	}
};
class mul : public value
{
	public:
	int getresult()
	{
		return a*b;
	}
};

int main()
{
	value *v;
	v = new add();
	v->setvalue(10,20);
	int result=v->getresult();
	cout<<"\n Addition is "<<result<<"\n";
	v=new mul();
	v->setvalue(5,4);
	result=v->getresult();
	cout<<"\n Multiplication is "<<result<<"\n";
	return 0;
}