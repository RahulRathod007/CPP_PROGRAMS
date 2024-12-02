#include<iostream>
#include<string.h>

using namespace std;

class Course
{
	int id;
	char name[90];
	int fees;
	
	public:
		void setId(int i)
		{
			id = i;
		}
		int getId()
		{
			return id;
		}
		
		void setName(char n[])
		{
			strcpy(name,n);
		}
		
		char *getName()
		{
			return name;
		}
		
		void setFee(int fee)
		{
			fees = fee;
		}
		
		int getFee()
		{
			return fees;
		}
};

class Institute
{
	private:
	Course course;
	public:
		void setData(Course c)
		{
			course = c;
		}
		
		void showData()
		{
			cout<<"\n Course Id is : "<<course.getId();
			cout<<"\n Course Name is : "<<course.getName();
			cout<<"\n Course Fee is : "<<course.getFee();
		}
};

int main()
{
	Course c;
	Institute institute;
	
	int id;
	char name[90];
	int fee;
	
	cout<<"\n Enter Course Id : ";
	cin>>id;
	
	cout<<"\n Enter Course name : ";
	_flushall();
	gets(name);
	
	cout<<"\n Enter Course price : ";
	cin>>fee;
	
	c.setId(id);
	c.setName(name);
	c.setFee(fee);
	
	institute.setData(c);
	institute.showData();
	return 0;
}
