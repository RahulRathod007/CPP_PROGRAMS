// Write a Cpp program to print all even numbers between 1 to 100. - using while loop 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int no,i=1;
  cout<<"enter a number";
  cin>>no;
  while(i<=no)
  {
    if(i%2==0)
    {
	  cout<<i<<"\t";
	}
	i++;
  }
  return 0;
}