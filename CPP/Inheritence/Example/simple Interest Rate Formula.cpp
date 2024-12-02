#include<iostream>


using namespace std;

class Interest 
{
	protected:
		int principle;
		int rate;
		int duration;
		
	public:	
	void setPRD(int principle, int rate, int duration)
	{
		this->principle = principle;
		this->rate = rate;
		this->duration = duration;
	}
};

class CalculateInterest : public Interest
{
	int SI;
	
	public:
	void CalcInterest()
	{
		SI = (principle * rate * duration)/100;
		cout<<"\n Simple Interest is : "<<SI;
		cout<<"\n Total Amount with interest : "<<principle + SI;
	}
};

int main()
{
	int p;
	int rate;
	int duration;
	
	cout<<"\n Enter Principle : ";
	cin>>p;
	
	cout<<"\n Enter Rate of Interest : ";
	cin>>rate;
	
	cout<<"\n Enter Duration / Time of Loan (int year): ";
	cin>>duration;
	
	CalculateInterest c;
	c.setPRD(p,rate,duration);
	c.CalcInterest();
	
	return 0;
}
