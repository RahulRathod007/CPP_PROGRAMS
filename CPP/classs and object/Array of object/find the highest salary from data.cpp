#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	private:
		int id;
		int sallary;
		char name[50];
	
	public:
		void setData(int i, char n[], int sal)
		{
			id = i;
			sallary = sal;
			strcpy(name,n);
		}
		
		int getSallary()
		{
			return sallary;
		}
		
		void showData()
		{
			cout<<"\n "<<id<<"\t "<<sallary<<"\t "<<name;
		}
};


	int main()
	{
		int size;
		cout<<"\n Enter Size of an array : ";
		cin>>size;
		
		int eid;
		int esal;
		char ename[50];
		Employee e[size];
		
		int i;
		for(int i = 0; i<size;i++)
		{
			cout<<"\n Enter id salary and Name of an Employee : \n";
			cin>>eid>>esal>>ename;
			
			e[i].setData(eid,ename,esal);
		}
		
		cout<<"\n Display Records : ";
		for(int i = 0; i<size;i++)
		{
			e[i].showData();
		}
		
		// Highest Sallary of employee :
		
		cout<<" \n\n Highest Sallary of an Employee is : ";
		int max = e[0].getSallary();
		int index = 0;
		for(int i = 0; i<size;i++)
		{
			if(e[i].getSallary() > max)
			{
				max = e[i].getSallary();
				index = i;
			}
		}
		e[index].showData();
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
