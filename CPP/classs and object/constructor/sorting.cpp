#include<iostream>

using namespace std;


class Sort
{
	int *ptr;
	
	public:	
	Sort(int a[])
	{
		ptr = a;
	}
	
	void sort()
	{
		for(int i =0; i<5;i++)
		{
			for(int j = 1+i; j<5;j++)
			{
				if(ptr[i] > ptr[j])
				{
					int temp = ptr[i];
					ptr[i] = ptr[j];
					ptr[j] = temp;
				}
			
			}
		}
		
		cout<<"\n Sorted Array : ";
		for(int i = 0;i<5;i++)
		{
			cout<<" "<<ptr[i];
		}
	}
	
};

int main()
{
	int arr[5] = {50,40,30,20,10};
	
	Sort s(arr);
	
	s.sort();
	
	return 0;
}
