//How to allocate dynamic memory of object at run by using pointer using malloc function.
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class employee
{
  private:
  int id, sal;
  char name[90];
  public:
  
  void setdata()
  {
     cout<<"\n enter name id and salary of employee\n";
	 cin>>name>>id>>sal;	
  }	
  void getdata()
  {
  	cout<<name<<"\t"<<id<<"\t"<<sal<<"\n";
  }
};
  int main()
  {
  	employee *emp;
  	int i,size;
  	cout<<"\n enter a size of array";
  	cin>>size;
  	emp=(employee*)malloc(sizeof(employee*)*size);
  	for(i=0;i<size;i++)
  	{
  		emp[i].setdata();
	}
	for(i=0;i<size;i++)
	{
		emp[i].getdata();
	}
  }