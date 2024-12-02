#include<iostream>
#include<string.h>

using namespace std;

class occurenceApp
{
	public:
	void countFrequency(int arr[],int len)
	{
		//  count even and odd number in array.
		int even = 0;
		int odd = 0;
		for(int i = 0;i<len;i++)
		{
			if(arr[i] % 2 == 0)
			{
				++even;
			}
			else
			{
				++odd;
			}
		}
		
		cout<<"\n Even Occurence is : "<<even;
		cout<<"\n Odd Occurence is : "<<odd;
		
	}
	
	void countFrequency(char str[])
	{
		//  count vowel and consonent charcter in string.
		
		int len = strlen(str);
		int i = 0;
		int vowel =0 ;
		int cons = 0;
		while(str[i] != '\0')
		{
			if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
			{
				if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] =='o' || str[i]== 'u' || 
				str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] =='O' || str[i]== 'U')
				{
					++vowel;
				}
				else 
				{
					++cons;
				}
			}
			
			++i;
		}
		cout<<"\n Vowel Occurence is : "<<vowel;
		cout<<"\n consonent Occurence is : "<<cons;
	}	
};

int main()
{
	int arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);
	
	occurenceApp app;
	
	cout<<"\n Enter intger array : ";
	for(int i = 0; i<len;i++)
	{
		cin>>arr[i];
	}
	
	 app.countFrequency(arr,len);
	 
	char str[90];
	_flushall();
	cout<<"\n\n Enter string : ";
	gets(str);
	app.countFrequency(str);
	return 0;
}
