	#include<iostream>
	#include<conio.h>
	using namespace std;
	class ArrayParent
	{ protected:
	  int *ptr;
	   public:
	   void setArray(int a[])
	   { 
			ptr=a;
	   }
	};
	class GetMax:public ArrayParent
	{  int max;
	   public:
	   int getMax(){
	      max=ptr[0];
	      for(int i=0;i<5;i++)
	      {
		 if(ptr[i]>max)
		 { 
		 	max=ptr[i];
		 }
	      }
	      return max;
	   }
	};
	int main()
	{
	 int m[5];
	 cout<<"\nEnter five values in array\n";
	 for(int i=0;i<5;i++)
	 { 
	 	cin>>m[i];
	 }
	 GetMax g;
	 g.setArray(m);
	 int maxValue=g.getMax();
	 cout<<"\nMax value is "<<maxValue<<"\n";
	 return 0;
	}
