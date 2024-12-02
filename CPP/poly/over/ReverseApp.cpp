#include<iostream>
#include<string.h>

using namespace std;

class Reverse
{
	
	public:
	void reverseArray(int a[], int len)
	{
	
		int *int_ptr;
		int_ptr = a;

		int mid = len/2;
		int end = len-1;
		
		for(int start = 0; start<mid;start++)
		{
			int temp = int_ptr[start];
			int_ptr[start] = int_ptr[end];
			int_ptr[end] = temp;
			end--;
		}
		
		cout<<"\n Display Reverse Array : ";
		
		for(int i = 0; i<len; i++)
		{
			cout<<" "<<a[i];
		}
		
	}
	
	void reverseArray(char str[])
	{
		//  perform string reverse logic.
		int len;
		len = strlen(str);
		
		char *str_ptr;
		str_ptr = str;

		int mid = len /2;
		int end = len-1;
		
		for(int start = 0; start<mid;start++)
		{
			int temp = str_ptr[start];
			str_ptr[start] = str_ptr[end];
			str_ptr[end] = temp;
			end--;
		}
		
		cout<<"\n Display Reverse String : "<<str_ptr;
	}
};
int main()
{
	int arr_int[5];
	int len = sizeof(arr_int) / sizeof(arr_int[0]);
	Reverse r;
	cout<<"\n Enter intger array : ";
	for(int i = 0; i<5;i++)
	{
		cin>>arr_int[i];
	}
	r.reverseArray(arr_int,len);
	char arr_string[90];
	_flushall();
	cout<<"\n\n Enter string : ";
	gets(arr_string);
	r.reverseArray(arr_string);
	
	return 0;
}
