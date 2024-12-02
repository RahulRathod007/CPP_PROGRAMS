#include<iostream>
using namespace std;

class Reverse
{
	private:
		int rev;
		int no;
		
		public:
			void setValue(int x)
			{
				no = x;
			}
		
			int getReverse()
			{
				int rem;
				rev = 0;
				while(no != 0)
				{
					int rem = no % 10;
					rev = rev * 10 + rem;
					no = no / 10;
				}
				return rev;
			}
};

		int main()
		{
			int num;
			
			cout<<"\n Enter Number : ";
			cin>>num;
			
			Reverse r;
			
			r.setValue(num);
			
			int result = r.getReverse();
			
			cout<<"\n Reverse Number is : "<<result;
		}
