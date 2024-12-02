/*
Example: Suppose consider we have class name as Sum with functions 
void setValue(int a[]): this function is used for accept array as parameter 
int getSum(): this function can calculate sum of all values of array and return it.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class  sum 
{
  private:
  int *ptr;
  public :
  
  void setvalue(int a[])
  {
  	ptr = a;
  }
  int getsum()
  {
  	int s = 0;
  	for(int i=0;i<5;i++)
  	{
  		s = s + ptr[i];
	}
	return s;
  }
};
	 int main()
	 {
	 	sum s;
	 	int m[]={10,20,30,40,50};
	 	s.setvalue(m);
	 	int result = s.getsum();
	 	cout<<"\n sum is "<<result;
	 }