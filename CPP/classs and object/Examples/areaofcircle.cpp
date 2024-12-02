 #include<iostream>
 
 using namespace std;
 
 class Circle
 {
 	float r;
 	public:
	void setRadius(float radius)//accept the radius
 	{
 		r = radius;	
 	}
 	void showArea()
 	{ 
 		float area = 3.14 * r * r;
 		
 		cout<<"\n Area of circle is : "<<area;
 	}
 };
 
 
 int main()
 {
 	Circle c;
 	
 	float radius;
 	cout<<"\n Enter the redius of circle : ";
 	cin>>radius;
 	
 	c.setRadius(radius);
 	c.showArea();
 }
 
