//wap to addtion of two no using function overloading
#include<iostream>
#include<conio.h>
using namespace std;

	void add(int x , int y)
	{
		cout<<"\n\nAddition of integer is ""\n"<<x+y;
	}
	void add(float x , float y)
	{
		cout<<"\n\nAddition of Float is""\n"<<x+y;
	}
	
	int main()
	{
		add(100,200);
		add(3.4f,5.4f);
		getch();
	}
	
/*
	#include<iostream>
	#include<conio.h>
	using namespace std;
	void add(int x, int y)
	{
		cout<<"\n\nAddiotion of integer is "<<x+y;
	}	
	float add(float x,float y)
	{
	  return x+y;
	}
	int main()
	{
	  add(10,20);
	  float result=add(3.4f,4.3f);
	  cout<<"\n\n\naddition of float is "<<result;
	}
*/	