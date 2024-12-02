// Write a Cpp program to print all natural numbers in reverse (from n to 1). - using while loop 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int n;
 cout<<"enter a number";
 cin>>n;
 while(n!=0)
 {
   cout<<n<<"\t";
   n--;
 }
 }