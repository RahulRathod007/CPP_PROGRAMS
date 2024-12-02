#include<iostream>
using namespace std;

class Power
{
	private:
		int index;
		int base;
		int p;
		public:
			void setValue(int x, int y)
			{
				index = x;
				base = y;
			}
			
			int getPower()
			{
				p = 1;
				for(int i = 1; i<=index; i++)	
				{
					p = p * base;
				}
				return p;
			}
};

	int main()
	{
		int i,b;
		cout<<"\n Enter index : ";
		cin>>i;
		
		cout<<"\n Enter Base : ";
		cin>>b;
		
		Power pow;
		pow.setValue(i,b);
		int result = pow.getPower();
		cout<<"\n Power is a : "<<result;
	}
