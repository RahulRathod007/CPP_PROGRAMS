/*
WAP to create parent class name as Array with method 
void setArray(int a[]): this method accept array as parameter 
and we have one more child class name as Sort with method name as 
void sortAscending(): this method accept the array from parent class and perform sorting on it in ascending order
*/

	#include<iostream>
	#include<conio.h>
	using namespace std;
	class Array
	{
	protected:
		int *ptr,i,j,temp;
	
	public:
		void setArray(int a[])
		{
		 ptr=a;
		}
   	};
   
	class sort:public Array
		{
		  public:
		  void sortArray()
		  {
		  	for(i=0;i<5;i++)
		  	{
		  		for( j=i+1;j<5;j++)
		  		{
		  			if(ptr[i]>ptr[j])
		  			{
		  				 temp=ptr[i];
		  				ptr[i]=ptr[j];
		  				ptr[j]=temp;
					}
		  			
				} 		
			}
		  		cout<<"Assending Array \n";
		  		for(i=0;i<5;i++)
		  		{
		  			cout<<ptr[i]<<"\t";
				}
		  }	
		};
		
		int main()
		{
          	int a[5],i;
          	cout<<"\nEnter a element in array \n";
			for(i=0;i<5;i++)
			{
				cin>>a[i];
			}
	
          
		  	sort s;
		   	s.setArray(a);
		  	s.sortArray();
		}