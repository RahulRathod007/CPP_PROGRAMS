/*
Suppose consider we have class name as Employee with field id,name and salary and 
we want to create 5 employee object and display its data. using pointer of object
*/
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class employee
{
 private:
 int id,sal;
 char name[90];
 public:
 
 void setdata()
 {
    cout<<"\n enter a id name and salary pf employee \n";
	cin>>id>>name>>sal;	
 } 	
 void showdata()
 {
 	cout<<"id"<<"\t"<<name<<"\t"<<sal<<"\n";
 }
};
	int main()
	{
		employee *emp;
		emp->setdata();
		emp->showdata();
		return 0;
	}