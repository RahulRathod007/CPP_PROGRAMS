#include<iostream>
using namespace std;

#include<string.h>

class UpperCase
{
	char *str;
	
	public:
	UpperCase(char *ch)
	{
		str = ch;
	}
	
	void ToConvertUpper()
	{
		int i = 0;
		while(str[i] != '\0')
		{
			if(str[i] >= 'a' && str[i]<= 'z')
			{
				str[i] = str[i] - 32;
			}
			++i;
		}
		cout<<"\n String : "<<str;
	}
};

int main()
{
	char str[90];
	cout<<"\n Enter string : ";
	gets(str);
	
	UpperCase u(str);
	
	u.ToConvertUpper();
	
	return 0;
}
