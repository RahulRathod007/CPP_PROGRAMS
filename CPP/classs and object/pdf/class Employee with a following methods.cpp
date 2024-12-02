#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
	char name[90];
	int id;
	int basic_sal;
	int incre_per;
	int incre_sal=0;
	
	public:
		void setPersonalInfo(char ename[],int eid,int basicsal)
		{
			strcpy(name,ename);
			id = eid;
			basic_sal = basicsal;
		}
		
		 void setProgressPer(int progress)
		 {
		 	 incre_per = 30;
		 	if(progress > 60)
		 	{	
			  incre_sal = incre_per * basic_sal /100; 
			}
		 }
		 
		 void show()
		 {
		 	cout<<"\n Employee ID : "<<id;
		 	cout<<"\n Employee Name : "<<name;
		 	cout<<"\n Employee basic Salary : "<<basic_sal;
		 	cout<<"\n Employee incresed Salary : "<<incre_sal;
		 	cout<<"\n Employee Total Salary : "<<basic_sal + incre_sal;
		 	
		 }
		
};

int main()
{
	Employee e;
	char name[90];
	int id;
	int salary;
	cout<<"\n Enter Name ";
	gets(name);
	
	cout<<"\n Enter id : ";
	cin>>id;
	
	cout<<"\n Enter salary : ";
	cin>>salary;
	
	e.setPersonalInfo(name,id,salary);
	
	int per;
	cout<<"\n Enter Progress Percentage : ";
	cin>>per;
	e.setProgressPer(per);
	
	e.show();
	
	return 0;
}
