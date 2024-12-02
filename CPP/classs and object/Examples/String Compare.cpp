#include<iostream>
#include<string.h>

using namespace std;

class ComapreString
{
	char *str1;	
	char *str2;
	
		public:
			void setString(char first[], char sec[])
			{
				str1 = first;
				str2 = sec;
			}
			
			int comparestring()
			{
				int len1= strlen(str1);
				int len2= strlen(str2);
				
				if(len1 != len2)
				{
					return -1;
				}
				else
				{
					int i =0;
					int flag = 0;
					while(str1[i] != '\0')
					{
						int diff;
						//int diff = str1[i] - str2[i];
						//if(diff != 0)
						if(diff = str1[i] - str2[i] != 0)
						{
							flag = diff;
						}
						++i;	
					}
					return flag;
				}
			}
};



	int main()
	{
		char first[90];
		char sec[90];
		
		ComapreString c;
		
		cout<<"\n Enter first String : ";
		cin>>first;
		
		cout<<"\n Enter second String : ";
		cin>>sec;
		
		c.setString(first,sec);
		int r = c.comparestring();
		if(r != 0)
		{
			cout<<"\n String is not eqaul : ";
		}
		else
		{
			cout<<"\n String is Eqaul : ";
		}
		
		return 0;
	}
	
	
	
	
	
	
	
	
	
