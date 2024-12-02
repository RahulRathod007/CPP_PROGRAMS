// Write a Cpp program to find sum of all natural numbers between 1 to n. 
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
    sum = sum + i;
    i++;
  }
  cout<<sum<<"\t";
  return 0;
}