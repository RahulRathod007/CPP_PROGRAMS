//billing application and the customer required different types of bill.
#include<iostream>
#include<conio.h>
using namespace std;
void bill(int qty, int rate, int gstrate)
{
	int gst_Amt = (qty *rate)*18/100;
	int total =(qty*rate)+gst_Amt;
	cout<<"\n Total bill is"<<total<<"\n";
}
void bill(int qty ,int rate)
{
	int total = (qty*rate);
	cout<<"\n Total bill is"<<total<<"\n";
}
int main()
{
	bill(10,100,18);  // call bill with gst
	bill(10,100);    //call bill without gst
}