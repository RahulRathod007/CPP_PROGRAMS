#include<iostream>
#include<string.h>

using namespace std;


//Input :  1 2 3 2 1

class PalindromeApp 
{
	int *ptr;
	int len;
	
	char *chptr;
	
	public:
	PalindromeApp(int a[],int len)
	{
		ptr = a;
		this->len = len;
	}
	
	PalindromeApp(char ch[])
	{
		// this constructor can accept the charcter array.
		chptr = ch;
	}
	void checkIntArray() 
	{
		//this function can use the array is palindrome or not.
		// 1 2 3 2 1
		int flag = 0;
		
		for(int i = 0;i<len/2 && len != 0 ;i++)
		{
			
				if(ptr[i] != ptr[len - 1 - i])
				{
					flag = 1;
					break;
				}
			
		}
		if(flag == 1)
		{
			cout<<"\n Array is not Palindrom \n";
		}
		else 
		{
			cout<<"\n Array is Palindrom \n";
		}
	}
	
	void checkCharArray()
	{
		//this function can use the string is palindrome or not.
		int len2 = strlen(chptr);
		int end = len2 - 1;
		int flag = 0;
		for(int start = 0; start<len2/2;start++)
		{
			if(chptr[start] - chptr[end] == 0)
			{
				flag = 1;
			}
		}
		
		if(flag == 1)
		{
			cout<<"\n String is palindrom\n";
		}
		else
		{
			cout<<"\n String is not palindrom \n";
		}
	}
	
};


int main()
{
	int len;
	cout<<"\n Enter size of an array : ";
	cin>>len;
	
	int IntArr[len];
	cout<<"\n Enter Array : ";
	for(int i = 0;i<len;i++)
	{
		cin>>IntArr[i];
	}
	
	PalindromeApp P(IntArr,len);
	P.checkIntArray();
	
	char str[90];
	_flushall();
	cout<<"\n Enter String : ";
	gets(str);
	
	PalindromeApp P_P(str);
	P_P.checkCharArray();
	
	return 0;
}    
