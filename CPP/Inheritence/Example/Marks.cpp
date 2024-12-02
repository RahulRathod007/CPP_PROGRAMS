#include<iostream>
#include<string.h>
using namespace std;


class Marks
{
	protected:
		int rollNo;
		char name[90];
		int marks;
	
	Marks(int rollNo, char name[],marks)
	{
		this->rollNo = rollNo;
		strcpy(this->name, name);
		this->marks = marks;
	}
		
	
};

class Physics : public Marks
{
	
};

class Chemistry  : public Marks
{
	
};

class Mathematics : public Marks
{
	
};


int main()
{
	
	return 0;
}
