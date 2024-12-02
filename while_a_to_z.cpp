// Write a cpp program to print all alphabets from a to z. - using while loop 

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 char ch='A';
 while(ch<='Z')
 {
  cout<<ch<<"\t";
  ch++;
 }
 return 0;
}

/*

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  char ch=97;
  while(ch<=122)
  {
   cout<<ch<<"\t";
   ch++;
  }
}

*/