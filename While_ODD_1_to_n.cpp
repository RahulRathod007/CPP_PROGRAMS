// Write a Cpp program to print all odd number between 1 to 100. 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int no,i=1;
  cout<<"enter a numer";
  cin>>no;
  while(i<=no)
  {
   if(i%2==1)
   {
    cout<<i<<"\t";
   }
   i++;
  }
  return 0;
}