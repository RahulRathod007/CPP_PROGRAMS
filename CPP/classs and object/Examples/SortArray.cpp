#include<iostream>

using namespace std;

class Sort
{
	int *ptr;
	int len;
	public:
		void setArray(int arr[],int alen)
		{
			ptr = arr;
			len = alen;
		}
		
		void sort_array()
		{
			for(int i = 0; i<len; i++)
			{
				
				for(int j=i+1; j<len;j++)
				{
					if(ptr[i] > ptr[j])
					{
						int temp = ptr[i];
						ptr[i] = ptr[j];
						ptr[j] = temp;
					}
				}
			}
			cout<<"\n Display Assending Order Array : ";
			for(int i = 0;i < len;i++)
			{
				cout<<" "<<ptr[i];
			}
		}
};


int main()
{
	int size;
	cout<<"\n Enter Size of an array : ";
	cin>>size;
	int arr[size];
	
	Sort s;
	cout<<"\n Enter elements : ";
	for(int i = 0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	s.setArray(arr,size);
	s.sort_array();
	
	return 0;
}
