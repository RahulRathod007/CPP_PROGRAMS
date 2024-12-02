#include<iostream>
#include<string.h>
using namespace std;


class Employee
{
	int id;
	char name[90];
	int sal;
	
	public:	
	Employee(int id,char n[],int sal)
	{
		this->id = id;
		strcpy(this->name,name);
		this->sal = sal;
	}
	
	Employee(Employee &emp)
	{
		this->id = emp.id;
		strcpy(this->name,emp.name);
		this->sal = emp.sal;	
	}
	
	void show()
	{
		cout<<"\n Id : "<<id;
		cout<<"\n Name : "<<name;
		cout<<"\n Salary : "<<sal;
	}
	
};

int main()
{
	Employee e(1,"Nandu",12000);
	
	Employee e1(e);
	
	cout<<"\n First object : ";
	e.show();
	
	cout<<"\n Second Object : ";
	e1.show();
	
	
	
	return 0;
}
