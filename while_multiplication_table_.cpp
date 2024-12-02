// Write a Cpp program to print multiplication table of any number. 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int no,i=1,p;
  cout<<"enter a number";
  cin>>no;
  while(i<=10)
  {
    p = no * i ;
    i++;
    cout<<p<<"\n";
  }
  return 0;
}