#include<iostream>

using namespace std;


class Power
{

	int index,base;
	public:
	Power(int i,int b)
	{
		index = i;
		base = b;
	}
	
	int getPower()
	{
		int p = 1;
		while(index > 0)
		{
			p = p * base;
			--index;
		}
		return p;
	}
};
int main()
{
	Power p(5,3);
	
	int r = p.getPower();
	cout<<"\n Power is : "<<r;
	
	return 0;
}
