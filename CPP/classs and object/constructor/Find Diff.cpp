#include<iostream>

using namespace std;

class FindDiff
{
	int len;
	int *first;
	int *sec;
	int diff[];
	public:
		FindDiff(int a[],int b[],int len)
		{
			first = a;
			sec = b;
			this->len = len;
		}
		
		void findDifference()
		{
			int i;
			for(i=0;i<len;i++)
			{
				diff[i] = first[i] - sec[i];
			}
			
			cout<<"\n Difference array is : ";
			for(i=0;i<len;i++)
			{
				cout<<" "<<diff[i];
			}
		}
};


int main()
{
	int len;
	cout<<"\n Enter size of an array : ";
	cin>>len;
	
	int f[len];
	int s[len];
	int i = 0;
	cout<<"\n Enter first array elements : ";
	for(i=0;i<len;i++)
	{
		cin>>f[i];
	}
	
	cout<<"\n Enter second array elements : ";
	for(i=0;i<len;i++)
	{
		cin>>s[i];
	}
	
	FindDiff find(f,s,len);
	
	
	find.findDifference();
	
	return 0;
}
