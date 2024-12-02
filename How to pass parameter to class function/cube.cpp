/*WAP to create class name as Cube with two functions 
void setValue(int no): this function can accept no as a parameter 
int getCube(): this function can calculate cube of no and return it
*/
#include<iostream>
#include<conio.h>
using namespace std;
class cube
{
	private:
	int no;
	public:
	
	void setvalue(int x)
	{
		no = x;
	}
	int getcube()
	{
		return no*no*no;
	}
};
int main()
{
	cube c1;
	int val;
	cout<<"\n Enter a value";
	cin>>val;
	c1.setvalue(val);
	int result = c1.getcube();
	cout<<"\n Cube is "<<result;
}