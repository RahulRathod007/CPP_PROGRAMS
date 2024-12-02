#include<iostream>
using namespace std;

#include<string.h>
class Salary 
{
	private:
		int Id;
		char Name[90];
		int PresentDays;
		int PerDaySalary;
		int Total;
		
	public:
		Salary(int Id, char Name[], int PresentDays, int PerDaySalary)
		{
			this->Id = Id;
			strcpy(this->Name,Name);
			this->PresentDays = PresentDays;
			this->PerDaySalary = PerDaySalary;
		}
		
		void CalculateSalary()
		{
			Total = PresentDays * PerDaySalary;
		}
		
		void show()
		{
			cout<<"\n Employee Id is : "<<Id;
			cout<<"\n Employee Name is : "<<Name;
			cout<<"\n Employee Persent Days are : "<<PresentDays;
			cout<<"\n Employee Per Day Salary is : "<<PerDaySalary;
			cout<<"\n Total Salary is : "<<Total;
		}
};
int main()
{
	int id,PDay,perDaySalary;
	char name[90];
	
	cout<<"\n Enter id : ";
	cin>>id;
	
	cout<<"\n Enter Name : ";
	_flushall();
	gets(name);
	
	cout<<"\n Enter Present Days : ";
	cin>>PDay;
	
	cout<<"\n Enter Per Day Salary : ";
	cin>>perDaySalary;
	
	Salary s(id,name,PDay,perDaySalary);
	
	s.CalculateSalary();
	s.show();
	
	return 0;
}
