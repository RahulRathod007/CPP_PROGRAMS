#include<iostream>
#include<string.h>

using namespace std;



class Per
{
	protected:
	float per;
	public:
		void calPer(int s[])
		{
			per = 0;
			float total = 0;
			for(int i = 0;i<6;i++)
			{
				total = total + s[i];
			}
			
			per = total / 6;
		}
};

class CSE: public Per
{
	private:
		int Id;
		char Name[90];
		char Address[90];
		char Year[5];
	public:
		CSE(int id, char name[], char address[], char year[]) // char year means FE, SE, TE, BE
		{
			Id = id;
			strcpy(Name,name);
			strcpy(Address,address);
			strcpy(Year,year);
		}
		
		void showCsePer() 
		{
			cout<<"\n Student Id is : "<<Id;
			cout<<"\n Student Name is : "<<Name;
			cout<<"\n Student Address is : "<<Address;
			cout<<"\n Student Year is : "<<Year;
			cout<<"\n CSE Percentage is : "<<per;
			cout<<"\n\n";
		}
};

class ETC: public Per
{
	private:
		int Id;
		char Name[90];
		char Address[90];
		char Year[5];
		
	public:
	ETC(int id, char name[], char address[], char year[]) // char year means FE, SE, TE, BE
	{
		Id = id;
		strcpy(Name,name);
		strcpy(Address,address);
		strcpy(Year,year);
	}
	void showETCPer()	
	{
		cout<<"\n Student Id is : "<<Id;
		cout<<"\n Student Name is : "<<Name;
		cout<<"\n Student Address is : "<<Address;
		cout<<"\n Student Year is : "<<Year;
		cout<<"\n ETC Percentage is : "<<per;
	}
};
int main()
{
		int Id;
		char Name[90];
		char Address[90];
		char Year[5];
	cout<<"\n Enter Student Id : ";
	cin>>Id;
	
	cout<<"\n Enter Student Name : ";
	_flushall();
	gets(Name);
	
	cout<<"\n Enter Student Address : ";
	gets(Address);
	
	cout<<"\n Enter Student Year : ";
	gets(Year);
		
	int SubMarks[6];
	
	cout<<"\n Enter Subject Marks : ";
	for(int i = 0; i<6;i++)
	{
		cin>>SubMarks[i];
	}
	
	CSE c(Id,Name,Address,Year);
	c.calPer(SubMarks);
	c.showCsePer();
	
	
	cout<<"\n Enter Student Id : ";
	cin>>Id;
	
	cout<<"\n Enter Student Name : ";
	_flushall();
	gets(Name);
	
	cout<<"\n Enter Student Address : ";
	gets(Address);
	
	cout<<"\n Enter Student Year : ";
	gets(Year);
	int SubMarks2[6];
	cout<<"\n Enter Subject Marks : ";
	for(int i = 0; i<6;i++)
	{
		cin>>SubMarks2[i];
	}
	ETC e(Id,Name,Address,Year);
	e.calPer(SubMarks2);
	e.showETCPer();
	
	
	return 0;
}
