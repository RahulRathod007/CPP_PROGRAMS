	#include<iostream>
	#include<conio.h>
	using namespace std;
	class Value
	{ 
		protected:
	  	int a,b;
	  	public:
	   	void setValue(int x,int y)
	   { a=x;
	     b=y;
	   }
	};
	class Add:public Value
	{
	   public:
	   int getAdd(){
	     return a+b;
	   }
	};
	class Mul:public Value{
	   public:
	   int getMul()
	   { return a*b;
	   }
	};
	int main(){
	    Add ad;
	    ad.setValue(5,4);
	    int result=ad.getAdd();
	    cout<<"\nAddition is  "<<result<<"\n";
	    Mul m;
	    m.setValue(10,20);
	    result=m.getMul();
	    cout<<"\nMultiplication is "<<result<<"\n";
	   return 0;
	}
