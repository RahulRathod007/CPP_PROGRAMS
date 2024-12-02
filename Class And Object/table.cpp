/*
Example: WAP to create class name as Table with two functions 
void setValue(): this function accept number from keyboard 
void showTable(): this function can print the table of number.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Table
{
	private:
	int no,tab,i;
	public:
	 
	 void setdata()
	 {
	 	cout<<"\n enter a number \n";
	 	cin>>no;
	 }
	 void showTable()
	 {
	 	for(i=1;i<=10;i++)
	 	{
			 cout<<no*i<<"\n";
		}
	 }
};
int main()
{
	Table T;
	T.setdata();
	T.showTable();
	return 0;
}