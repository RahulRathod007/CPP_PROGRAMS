#include<iostream>

//Multiple inheritance
using namespace std;

class Fruit
{
	protected:
		int mango;
		int apple;
		int total;
		
		public:
		void setQuntity(int m, int a)
		{
			mango = m;
			apple = a;
		}
		
		void Total()
		{
			total = mango + apple;
			cout<<"\n Total Fruits in basket : "<<total;
		}
		
};

class Mango : public Fruit
{
	public:
	void showMango()
	{
		mango = total - apple;
		cout<<"\n Total mangos in basket : "<<mango;
	}
};

class Apple : public Mango
{
	public:
	void showApple()
	{
		apple = total - mango;
		cout<<"\n Total Apples in basket : "<<apple;
	}
};

int main()
{
	int mango;
	int apple;
	
	cout<<"\n Enter Mango Quantity : ";
	cin>>mango;
	
	cout<<"\n Enter Apple Quantity : ";
	cin>>apple;
	
	Apple a;
	a.setQuntity(mango,apple);
	a.Total();
	a.showMango();
	a.showApple();
	
	
	
	
	return 0;
}
