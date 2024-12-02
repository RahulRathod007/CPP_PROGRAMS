#include<iostream>

using namespace std;

class ArrayOperation
{
	protected:
	int *ptr;
	int len;
	
	public:
	void PerformOperation(int a[], int l)
	{
		ptr = a;
		len = l;
	}
	
};

class Sort: public ArrayOperation
{
	public:
	void sortArray()
	{
		for(int i=0;i<len;i++)
		{
			for(int j = i + 1; j<len;j++)
			{
				if(ptr[i] > ptr[j])
				{
					int temp = ptr[i];
					ptr[i] = ptr[j];
					ptr[j] = temp;
				}
			}
		}
		
 		cout<<"\n Sorted array : ";
		for(int i = 0;i<len;i++)
		{
			cout<<" "<<ptr[i];
		}
	}	
};

class Insertion: public ArrayOperation
{
	int element;
	int index;
	cout<<"\n Enter index of an array : ";
	cin>>index;
	
	cout<<"\n Enter element of an array : ";
	cin>>element;
	
	
	
}

int main()
{
	Sort s;
	
	int len;
	cout<<"\n Enter length of an array : ";
	cin>>len;
	
	int arr[len];
	cout<<"\n Enter array elemnts  : "
	for(int i = 0;i<len;i++)
	{
		cin>>arr[i];
	}

	s.PerformOperation(arr,len);
	s.sortArray();
	return 0;
}
