	#include<iostream>
	#include<conio.h>
	using namespace std;
	class RBI
	{ protected:
	   int maxIrate;
	  public:
	  void setMaxIrate()
	  { maxIrate=16;
	  }
	};
	class Cooperative:public RBI
	{  public:
	   void setMaxIrate()
	   { maxIrate=10;
	   }
	   void showCooperative()
	   {
	      cout<<"\nMax interest rate is "<<maxIrate<<"\n";
	   }
	};
	class Nationalize:public RBI
	{   public:
	    void setMaxIrate()
	    { maxIrate=7;
	    }
	    void showNationalize(){
	       cout<<"\nMax interest rate is "<<maxIrate<<"\n";
	    }
	};
	int main()
	{   Cooperative c;
	    c.setMaxIrate();
	    c.showCooperative();
	    Nationalize n;
	    n.setMaxIrate();
	    n.showNationalize();
	}

