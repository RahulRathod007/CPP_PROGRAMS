/*
Example: WAP to class name as FindMax with two functions 
void setArray(int a[]): this function is used for accept array as parameter 
int getMax(): this function is used for find the maximum value from array and return it.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class findmax
{
  private:
  int *ptr;
  public:
  
  void setarray(int a[])
  {
    ptr = a;	
  }	
  int getmax()
  {
  	int max=ptr[0];
  	for(int i=0;i<5;i++)
  	{
	    if(ptr[i]>max)
	    {
	    	max= ptr[i];
		}
	}
	return max;
  }
};
	int main()
	{
		findmax m;
		int a[5];
		cout<<"\n enter a values in array \n";
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
		}
		m.setarray(a);
		int result= m.getmax();
		cout<<"\n max is "<<result;
	}	