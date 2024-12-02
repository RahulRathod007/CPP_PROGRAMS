#include<iostream>

using namespace std;

class Rectangle
{
	int length;
	int breadth;
	public:
		Rectangle()	
		{
			length = 0;
			breadth = 0;
		}
		
		Rectangle(int l, int b)	
		{
			length = l;
			breadth = b;
		}
		
		Rectangle(int num)	
		{
			length = num;
			breadth = num;
		}
		
		void areaOfRect()
		{
			int area = length * breadth;
			cout<<"\n Area of Rectangle is : "<<area;
		}
};


int main()
{
	int length,breadth,no;
	
	cout<<"\n Enter length : ";
	cin>>breadth;
	
	cout<<"\n Enter Breadth : ";
	cin>>breadth;
	
	cout<<"\n Enter No : ";
	cin>>no;
	
	Rectangle r;
	Rectangle r1(length,breadth);
	Rectangle r2(no);
	
	r.areaOfRect();
	r1.areaOfRect();
	r2.areaOfRect();
	return 0;
}
