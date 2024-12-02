/*
Example: WAP to create class name as ToUpperCase with two functions
void setCharArray(char[]): this function is used for accept array as input
void convertToUpperCase(): this function is used  for convert your lower case string to upper case
*/
	#include<iostream>
	#include<conio.h>
	#include<string.h>
	using namespace std;
	class ToConvertUpper
	{
	   private:
	   char ch[90];
	   public:
	   void setCharArray(char c[])
	   { strcpy(ch,c);
	   }
	   void convertToUpperCase(){
	      int count=0;
	      while(ch[count]!='\0')
	      {
		if(ch[count]>='a' && ch[count]<='z')
		{
		   ch[count]=ch[count]-32;
		}
		++count;
	      }
	      cout<<"\nAfter conversion "<<ch;
	   }
	};

	int main(){
	   char name[90];
	   ToConvertUpper c;
	   cout<<"\nEnter name from string\n";
	   cin>>name;
	   c.setCharArray(name);
	   c.convertToUpperCase();
	}
