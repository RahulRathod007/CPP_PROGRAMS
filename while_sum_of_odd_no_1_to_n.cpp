// Write a Cpp program to find sum of all odd numbers between 1 to n. 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int no,i=1,sum=0;
  cout<<"enter a numer";
  cin>>no;
  while(i<=no)
  {
   if(i%2==1)
   {
    sum = sum + i;
   }
   i++;
  }
  cout<<"sum is"<<sum;
  return 0;
}