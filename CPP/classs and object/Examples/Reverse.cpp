#include<iostream>

using namespace std;

class Reverse
{

	int *ptr;
	int len;
	public:
		void setArray(int arr[], int alen)	
		{
			ptr = arr;
			len =alen;
		}
		
		void reverseArray()
		{
			int mid = len / 2;
			int end = len - 1;
			int count = 0;
			for(int start = 0; start<mid; start++)
			{
				count++;
				int temp = ptr[start];
				ptr[start] = ptr[end];
				ptr[end] = temp; 
				end--;
			}
			
			cout<<"\n After Reverse Array is : ";
			for(int i =0; i<len; i++)
			{
				cout<<" "<<ptr[i];
			}
			cout<<"\n Count = "<<count;
		}
};

int main()
{
	int size;
	cout<<"\n Enter size of an array : ";
	cin>>size;
	
	int arr[size];
	
	Reverse r;
	
	cout<<"\n Enter the elements of an array : ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	r.setArray(arr,size);
	r.reverseArray();
	
	return 0;
}
