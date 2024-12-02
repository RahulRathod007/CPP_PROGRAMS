#include<iostream>

using namespace std;


class AddAmount
{
	int amt;
	
	public:
		AddAmount()	
		{
			amt = 5000;
		}
		
		AddAmount(int a)
		{
			amt = a;
		}
		
		void show()
		{
			cout<<"\n Amount is : "<<amt;
		}
};

int main()
{
	int amount;
	cout<<"\n Enter Amount : ";
	cin>>amount;
	
	AddAmount a;
	a.show();
	
	AddAmount a1(amount);
	a1.show();
	
	
	return 0;
}
