//. Write a C program to find first and last digit of a number. 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int no,first,last;
 cout<<"enter a number";
 cin>>no;
 last = no % 10;
 while(no>10)
 {
   no = no / 10;
   first=no;
 }
 cout<<"First is :\t"<<first<<"\n"<<"Last is :\t"<<last;
}