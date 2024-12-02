#include<iostream>

using namespace std;


class Sum
{

	int *ptr;
	public:
	Sum(int a[])
	{
		ptr = a;
	}
	
	int getSum()
	{
		int sum = 0;
		for(int i = 0;i<5;i++)
		{
			sum = sum + ptr[i];
		}
		return sum;
	}
};
int main()
{
	int arr[5] = {1,2,3,4,5};
	Sum sum(arr);
	
	int r = sum.getSum();
	cout<<"\n Sum is : "<<r;
	
	return 0;
}
