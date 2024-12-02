#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;



class Salary 
{
	private:
		int Id;
		char Name[90];
		int PresentDays;
		int PerDaySalary;
		int Total;
		
	public:
         Salary() 
		 {
	        Id = 0;
	        PresentDays = 0;
	        PerDaySalary = 0;
	        Total = 0;
	        strcpy(Name, "");
    	 }
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
			cout<<"\n";
		}
};
int main()
{
	 int len;
    cout << "\nEnter how many employee data do you have to add: ";
    cin >> len;
	
	
	Salary *salary = new Salary[len];
	
	
	int id,PDay,perDaySalary;
	char name[90];

	for(int i = 0;i<len;i++)
	{
		cout<<"\n Enter id : ";
		cin>>id;
		
		cout<<"\n Enter Name : ";
		_flushall();
		gets(name);
		
		cout<<"\n Enter Present Days : ";
		cin>>PDay;
		
		cout<<"\n Enter Per Day Salary : ";
		cin>>perDaySalary;	
		
		salary[i] = Salary(id,name,PDay,perDaySalary);
	}
	
	for(int i =0;i<len;i++)
	{
		
		salary[i].CalculateSalary();
		salary[i].show();
	}
	
	
	delete[]salary;
	return 0;
}
