	#include<iostream>
	#include<conio.h>
	using namespace std;
	class Square
	{   protected:
	    int no;
	    public:
	    void setNumForSquare(int no)
	    { 
			this->no=no;
	    }
	};
	class Cube:public Square
	{   protected:
	    int cno;
	    public:
	    void setNumForCube(int no)
	    {  
			cno=no;
	    }
	};
	class NumberOperation:public Cube
	{    public:
	   int getSquare()
	   {
	   return no*no;
	   }
	   int getCube()
	   {
	      return cno*cno*cno;
	   }
	};
	  int main()
	  {
	  NumberOperation nop;
	  nop.setNumForSquare(10);
	  int sqResult=nop.getSquare();
	  cout<<"\nSquare is "<<sqResult<<"\n";
	  nop.setNumForCube(5);
	  int cResult=nop.getCube();
	  cout<<"\nCube is "<<cResult<<"\n";
	  return 0;
	  }

