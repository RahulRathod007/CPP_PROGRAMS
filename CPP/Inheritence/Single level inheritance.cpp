#include<iostream>

using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"It is class A "<<endl<<endl;
		}
};

class B : public A
{
	public:
		void Display()
		{
			cout<<"It is Class B"<<endl;
		}
};

int main()
{
	
	B b;
	b.show();
	b.Display();
	return 0;
}

/*
1. Single level inheritance: Single level inheritance means there is 
	only one base class and only one child class called as single level inheritance.
A - Parent class 
|
B - Child class

*/
