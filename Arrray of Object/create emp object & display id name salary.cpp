/*
Example: Suppose consider we have class name as Employee with field id,name  and salary and we want to create 5 employee 
object and display its data.*/
#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
  private:
  int id;
  char name[90];
  int sal;
  public:
  
  void setdata()
  {
    cout<<"\n enter a id name and salary of employee \n";
	cin>>id>>name>>sal;	
  }	
  void showdata()
  {
  	cout<<"id"<<"\t"<<name<<"\t"<<sal<<"\n";
  }
};
	int main()
	{
		employee emp[2];
	
		for(int i=0;i<2;i++)
		{
			emp[i].setdata();
		}
			cout<<"\n Display Employee values\n";
			for(int i=0;i<2;i++)
		{
			emp[i].showdata();
		}
	}


