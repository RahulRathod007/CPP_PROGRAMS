#include<iostream>
#include<string.h>

using namespace std;

class Extract_Digit
{
	char *str;
	
	public:
		void setString(char string[])	
		{
			str = string;
		}
		
		void extractdigit()
		{
			cout<<"\n Only Digits : ";
			int i = 0;
			while(str[i] != '\0')
			{
				if(str[i] >='0' && str[i] <= '9')
				{
					cout<<" "<<str[i];
				}
				++i;
			}
		}
		
		void onlystring()
		{
     		cout<<"\n Only String : ";
			int i = 0;
			int flag = 0;
			while(str[i] != '\0')
			{
				if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
				{
					flag = 1;
				}
				else
				{
					flag = 0;
				}
				if(flag == 1)
				{
					cout<<" "<<str[i];
				}
				++i;
			}
		}
		
		void onlySymbole()
		
		{
     		cout<<"\n Only Symboles : ";
			int i = 0;
			int flag = 0;
			while(str[i] != '\0')
			{
				if((str[i] >='0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
				{
					flag = 0;
				}
				else
				{
					flag = 1;
				}
				if(flag != 0)
				{
					cout<<" "<<str[i];
				}
				++i;
			}
		}	
};


int main()
{
	
	char str[90];
	
	cout<<"\n Enter any String here : ";
	gets(str);
	
	Extract_Digit e;
	
	e.setString(str);
	e.extractdigit();
	e.onlystring();
	e.onlySymbole();
	
	return 0;
}
