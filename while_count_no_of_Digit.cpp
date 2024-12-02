// Write a Cpp program to count number of digits in a number. 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int no,count=0;
  cout<<"enter a Number: ";
  cin>>no;
  while(no!=0)
  {
   no = no /10;
   count++;
  }
  cout<<"count is: "<<count;
  return 0;
}