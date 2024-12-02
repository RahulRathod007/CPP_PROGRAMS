    #include<iostream>
	#include<conio.h>
	using namespace std;
	class A
	{  public:
	   void show()
	   { 
	   cout<<"I am A show method\n";
	   }
	};
	class B: public A
	{ public:
	  void show()
	  { cout<<"I am B show method\n";
	  }
	};
	int main()
	{  B b1;
	   b1.show();
	}
