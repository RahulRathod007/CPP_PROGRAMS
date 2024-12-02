#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
  private:
  int id,sal;
  char name[90];
  public:
  	
  void setdata()
  {
  	cout<<"\n enter id name and salary of employee \n";
  	cin>>id>>name>>sal;
  }
  void showdata()
  {
  	cout<<id<<"\t"<<name<<"\t"<<sal<<"\n";
  }
};
  int main()
  {
  	employee emp[3];	
  	int i;
  	for(i=0;i<3;i++)
  	{
  	  emp[i].setdata();	
	}
	cout<<"\n display employee Details \n";
	for(i=0;i<3;i++)
	{
		emp[i].showdata();
	}
	
  }	