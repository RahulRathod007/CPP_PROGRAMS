 #include<iostream>
 
 using namespace std;
 
 class Rectangle
 {
 	int l;
 	int w;
 	public:
	void setLengthWidth(int len, int wid)
 	{
 		l = len;
 		w = wid;
 	}
 	void showArea()
 	{ 
 		
 		int area = l * w;
 		cout<<"\n Area of Recangle is : "<<area;
 	}
 };
 
 
 int main()
 {
 	Rectangle r;
 	
 	int length,width;
 	cout<<"\n Enter the length of rectangle : ";
 	cin>>length;
 	
 	cout<<"\n Enter the width of rectangle : ";
 	cin>>width;
 	
 	r.setLengthWidth(length,width);
 	r.showArea();
 }
 
