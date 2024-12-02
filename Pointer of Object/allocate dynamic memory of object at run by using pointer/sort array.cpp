/*
Q1. WAP to create class name as Sort with two methods 
void acceptArray(int a[]): this function can accept array as parameter
void sort(): this function can sort the array in ascending order.
*/
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Sort
{
  private:
  int i , a[5];
  public:
  void acceptarray()
  {
  	cout<<"\n enter a values in array \n";
  	for(i=0;i<5;i++)
  	{
  	  cin>>a[i];	
    }
  }
  void sort()
  {
  	cout<<"\n Sorted array \n";
  	for(i=0;i<5;i++)
  	{
  	   for(int j=i+1;j<5;j++)
		 {
		     if(a[i]>a[j])
			 {
			    int temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			 }	
		 }	
	}
	for(i=0;i<5;i++)
	{
		cout<<"\t"<<a[i];
	}
  }
};
 int main()
 {
 	 Sort *s;
 	 s->acceptarray();
 	 s->sort();
 }
