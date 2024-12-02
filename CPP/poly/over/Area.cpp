#include<iostream>

using namespace std;

class Area
{
	
	public:
	void calArea(int r)
	{
		//  calculate area of circle.
		int circle = 3.14 * r * r;
		cout<<"\n Area of circle is : "<<circle;
	}
	
	void calArea(int len, int width)
	{
		//  calculate area of reactangle.
		int rect = len * width;
		cout<<"\n Area of Rectangle is : "<<rect;
	}
	void calArea(float base, float height)
	{
		//  calculate area of triangle.
		float triangle = 0.5 * (base * height);
		cout<<"\n Area of triangle is : "<<triangle;
	}	
};
int main()
{
	Area a;
	a.calArea(4);
	a.calArea(4,3);
	a.calArea(18.6f,2.6f);
	return 0;
}
