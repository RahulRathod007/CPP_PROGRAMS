#include<iostream>

using namespace std;

 class AreaCalApp
 {
 	protected:
 	virtual double calArea()
	{
		return 0.0;
	}
 };
 
 class Rectangle : public AreaCalApp
 {
 	private:
 	double length;
 	double breadth;
 	
 	public:
	 	void setDataRect(double l, double b)
	 	{
	 		length = l;
	 		breadth = b;
		}
		
		//Overrided method
	 	double calArea()
		{
			double area = length * breadth;
			return area;	
		}	
 };
 
 class Circle : public AreaCalApp
 {	private:
 	double radius;
 	
 	public:
	 	void setDataCircle(double radius)
		{
			this->radius = radius;
		}
		
		//Overrided method
		double calArea()
		{
			double area = 3.14f * radius * radius;
			return area;
		}
 };
 
 class Square : public AreaCalApp
 {
 	private:
 	double side;
 	
 	public:
		void setDataSquare(double side)
		{
			this->side = side;
		}
		
		//Overrided method
		double calArea()
		{
			double area = side * side;
			return area;
		}
 };

int main()
{
	double l;
	double b;
	
	cout<<"\n Enter length : ";
	cin>>l;
	
	cout<<"\n Enter breadth : ";
	cin>>b;
	
	Rectangle r;
	r.setDataRect(l,b);
	double rectarea = r.calArea();
	cout<<"\n Area is : "<<rectarea;
	
	
	Circle c;
	double radius;
	cout<<"\n\n Enter radius of circle : ";
	cin>>radius;
	c.setDataCircle(radius);
	double circle = c.calArea();
	cout<<"\n Area of circle is : "<<circle;
	
	Square s;
	double side;
	cout<<"\n\n Enter side of Square : ";
	cin>>side;
	s.setDataSquare(side);
	double square = s.calArea();
	cout<<"\n Area of square is : "<<square;
	
	return 0;
}
