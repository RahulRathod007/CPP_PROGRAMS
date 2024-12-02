// Write a Cpp program to find sum of all even numbers between 1 to n. 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int no,i=2,sum=0;
  cout<<"enter a number ";
  cin>>no;
  while(i<=no)
  {
    if(i%2==0)
    {
	  sum = sum + i;
	}
	i++;
  }
  cout<<"sum is "<<sum;
}