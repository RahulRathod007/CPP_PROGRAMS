#include<iostream>
using namespace std;

class Majority
{
	int *ptr;
	int len;
	public:
		Majority(int a[],int len)
		{
			ptr = a;
			this->len = len;
		}
		
		void getMajority()
		{
			int majority;
			int count;
			for(int i = 0;i<len;i++)
			{
				count = 0;
				for(int j = 0;j<len;j++)
				{
					if(ptr[i] == ptr[j])
					{
						majority = ptr[i];
						++count;
					}
				}
			}
			
			if(count > len/2)
			{
				cout<<"\n Majority Element is : "<<majority;
			}
			else
			{
				cout<<"\n There is no majority element : ";
			}
		}
};
int main()
{
	int len;
	cout<<"\n Enter size of an array  : ";
	cin>>len;
	
	int arr[len];
	
	cout<<"\n Enter array Elements : ";
	for(int i = 0;i<len;i++)
	{
		cin>>arr[i];
	}
	
	Majority m(arr,len);
	
	m.getMajority();
	
	
	
	return 0;
}
