#include<iostream>

using namespace std;

class ArrayOperationApp 
{
	public:
		void arrayOperation(int a[], int len)
		{
			//  Sort Array Ascending and Descending Order.
			for(int i = 0;i<len;i++)
			{
				for(int j =1+i; j<len;j++)
				{
					if(a[i] > a[j])
					{
						int temp  = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
			
			cout<<"\n Display Ascending Order Array : ";
			for(int i = 0; i<len;i++)
			{
				cout<<" "<<a[i];
			}
			
			for(int i = 0;i<len;i++)
			{
				for(int j =1+i; j<len;j++)
				{
					if(a[i] < a[j])
					{
						int temp  = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
			
			cout<<"\n Display Descending Order Array : ";
			for(int i = 0; i<len;i++)
			{
				cout<<" "<<a[i];
			}
		}
		
		void arrayOperation(int a[],int b[], int len,int len2)
		{
		    a[len + len2];
			for(int i = 0 ; i<len2;i++)
			{
				a[len + i] = b[i];
			}
			cout<<"\n Display Marge Array : ";
			for(int i = 0; i<len+len2;i++)
			{
				cout<<" "<<a[i];
			}
		}
};

int main()
{
	int arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);
	
	ArrayOperationApp app;
	
	cout<<"\n Enter intger array : ";
	for(int i = 0; i<5;i++)
	{
		cin>>arr[i];
	}
	app.arrayOperation(arr,len);
	int arr2[5];
	int len2 = sizeof(arr2) / sizeof(arr2[0]);
	cout<<"\n Enter 2nd array : ";
	for(int i = 0; i<len2;i++)
	{
		cin>>arr2[i];
	}
	app.arrayOperation(arr,arr2,len,len2);
	return 0;
}
