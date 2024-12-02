#include<iostream>
#include<conio.h.>
using namespace std;
class Base 
{
	public:
		virtual void func()
		{
		}
	};
	class Derived:public Base
	{
		void func();
	};
	
