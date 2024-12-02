#include<iostream>
#include<string.h>

using namespace std;

class MergeArray
{		
	int *first;
	int *sec;
	int flen;
	int slen;
		public:
	void setArray(int a[],int b[], int f, int s)
	{
		first = a;
		sec = b;
		
		flen = f;
		slen = s;
	}

	void mergeArray()
	{
		int arrlen = flen + slen;
		int arr[arrlen];
		for(int i = 0;i<flen;i++)
		{
			arr[i] = first[i];
		}
		
		for(int i = 0;i<slen;i++)
		{
			arr[flen+i] = sec[i];
		}
		
		cout<<"\n Merge Array : ";
		for(int i = 0;i<arrlen;i++)
		{
			cout<<" "<<arr[i];
		}
	}
};

int main()
{
	MergeArray m;
	
	int first[90];
	int sec[90];
	
	int flen;
	cout<<"\n Enter length of first array : ";
	cin>>flen;
	
	cout<<"\n Enter first array : ";
	for(int i = 0;i<flen;i++)
	{
		cin>>first[i];
	}

	int slen;
	cout<<"\n Enter length of second array : ";
	cin>>slen;
	
	cout<<"\n Enter Second Array : ";
		for(int i = 0;i<slen;i++)
	{
		cin>>sec[i];
	}
	
	m.setArray(first,sec,flen,slen);
	
	m.mergeArray();

	

	return 0;
}
