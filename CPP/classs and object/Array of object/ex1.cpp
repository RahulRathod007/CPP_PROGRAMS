#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	public:
		int id;
		
	private:
		int salary;
		
	public:
		char name[50];
	
	public:
		void setData(int i, int sal, char n[])
		{
			id = i;
			salary = sal;
			strcpy(name,n);	
		}
		
	public:
		void showData()
		{
			cout<<"\n "<<id<<"\t"<<salary<<"\t"<<name;
		}
};


int main()
{
	int size;
	cout<<"\n Enter size of an array : ";
	cin>>size;
	
	Employee e[size];

	
	int i;
	int eid,esal;
	char ename[50];

	for(i = 0; i<size;i++)
	{
		cout<<"\n Enter id, salary and name : \n";
		cin>>eid>>esal>>ename;
		e[i].setData(eid,esal,ename);
	}
	
	cout<<"\n Display Record : \n";
	for(i = 0; i<size;i++)
	{
//		cout<<"\n "<<e[i].id;
//		cout<<"\n "<<e[i].name;
		e[i].showData();
	}
	
	return 0;	
}














