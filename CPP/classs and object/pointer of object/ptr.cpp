#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;


class Employee
{
	char name[90];
	
		
	public:
		void setData()
		{
			cout<<"\n Enter name : ";
			_flushall();
			gets(name);
		}
	
		void showData()
		{
			cout<<"\n Name : "<<name;
		}
};


int main()
{
	Employee *e;
	int size;
	cout<<"\n Enter name count: ";
	cin>>size;
	

	e = (Employee*)malloc(sizeof(Employee) * size);
	
	for(int i = 0;i<size;i++)
	{
			(e+i)->setData();
	}
	cout<<"\n Display Data : ";
	for(int i = 0;i<size;i++)
	{
		(e+i)->showData();
	}

	return 0;
}
