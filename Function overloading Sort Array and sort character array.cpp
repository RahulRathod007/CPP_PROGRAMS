/*
Example: Write a program using function overloading 
void sort(int a[]): this function accept integer array and sort it.
void sort(char[]): this function accept character array and sort it.
*/

	#include<iostream>
	#include<conio.h>
	#include<string.h>
	using namespace std;
	void sort(int a[])
	{
	   for(int i=0; i<5;i++)
	   {
	      for(int j=(i+1);j<5;j++)
	      {
		 if(a[i]>a[j])
		 { int temp=a[i];
		   a[i]=a[j];
		   a[j]=temp;
		 }
	      }
	   }
	}
	void sort(char ch[])
	{
	   int len=strlen(ch);
	   for(int i=0;i<len;i++)
	   {
	      for(int j=(i+1);j<len; j++)
	      {
		  if(ch[i]>ch[j])
		  {
		    char temp=ch[i];
		    ch[i]=ch[j];
		    ch[j]=temp;
		  }
	      }
	   }
	}
	int main(){
	  int a[5];
	  char ch[90];
	  cout<<"\nEnter values in integer array\n";
	  for(int i=0;i<5;i++)
	  { cin>>a[i];
	  }
	  cout<<"\nEnter data in character array\n";
	  cin>>ch;
	  cout<<"\nBefore sorting integer data\n";
	  for(int i=0;i<5;i++)
	  { cout<<a[i]<<"\t";
	  }
	  cout<<"\nBefore sorting character data\n";
	  cout<<ch<<"\n";
	  sort(a);//call integer array function
	  sort(ch);//call character array function
	  cout<<"\nAfter sorting integer data\n";
	  for(int i=0;i<5;i++)
	  { cout<<a[i]<<"\t";
	  }
	  cout<<"\nAfter sorint character data\n";
	  cout<<ch;
	  return 0;
	}
