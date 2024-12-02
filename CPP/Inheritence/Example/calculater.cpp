#include<iostream>

using namespace std;

 class Calculater
 {
 	protected:
 	virtual double performOperation()
	{
		return 0.0;
	}
 };
 
 class Addition : public Calculater
 {
 	private:
 	double a;
 	double b;
 	
 	public:
	 	void setDataAddition(double a, double b)
	 	{
	 		this->a = a;
	 		this->b = b;
		}
		
		//Overrided method
	 	double performOperation()
		{
			double addition = a + b;
			return addition;	
		}	
 };
 
 class Subtraction : public Calculater
 {
 	private:
 	double a;
 	double b;
 	
 	public:
	 	void setDataSubtraction(double a, double b)
	 	{
	 		this->a = a;
	 		this->b = b;
		}
		
		//Overrided method
	 	double performOperation()
		{
			double sub = a - b;
			return sub;	
		}	
 };
 
 class Multiplication : public Calculater
 {
 	private:
 	double a;
 	double b;
 	
 	public:
	 	void setDataMultiplication(double a, double b)
	 	{
	 		this->a = a;
	 		this->b = b;
		}
		
		//Overrided method
	 	double performOperation()
		{
			double multiply = a * b;
			return multiply;	
		}	
 };
 
 class Division : public Calculater
 {
 	private:
 	double a;
 	double b;
 	
 	public:
	 	void setDataDivision(double a, double b)
	 	{
	 		this->a = a;
	 		this->b = b;
		}
		
		//Overrided method
	 	double performOperation()
		{
			double div = a / b;
			return div;	
		}	
 };
 
 class Square : public Calculater
 {
 	private:
 	double a;
 	
 	public:
	 	void setDataSquare(double a)
	 	{
	 		this->a = a;
		}
		
		//Overrided method
	 	double performOperation()
		{
			double square = a * a;
			return square;	
		}	
 };

int main()
{
	double a;
	double b;
	
	cout<<"\nAddition : Enter value of a : ";
	cin>>a;
	
	cout<<"\n Addition : Enter value of b : ";
	cin>>b;
	
	double result;
	
	Addition add;
	add.setDataAddition(a,b);
    result = add.performOperation();
	cout<<"\n Addition is : "<<result;
	
	cout<<"\n\n====================================================";
	
	cout<<"\n\nSubtraction : Enter value of a : ";
	cin>>a;
	
	cout<<"\n Subtraction : Enter value of b : ";
	cin>>b;
	
	Subtraction s;
	s.setDataSubtraction(a,b);
	result = s.performOperation();
	cout<<"\n Subtraction is : "<<result;
	
	cout<<"\n\n====================================================";
	
	cout<<"\n\nMultiplication: Enter value of a : ";
	cin>>a;
	
	cout<<"\nMultiplication: Enter value of b : ";
	cin>>b;
	
	Multiplication m;
	m.setDataMultiplication(a,b);
	result = m.performOperation();
	cout<<"\n Multiplication is : "<<result;
	
	cout<<"\n\n====================================================";
	
	cout<<"\n\nDivision : Enter value of a : ";
	cin>>a;
	
	cout<<"\nDivision : Enter value of b : ";
	cin>>b;
	
	Division d;
	d.setDataDivision(a,b);
 	result = d.performOperation();
	cout<<"\n Division is : "<<result;
	
	cout<<"\n\n====================================================";
	
	cout<<"\n\n Square : Enter value of a : ";
	cin>>a;
	
	Square sq;
	sq.setDataSquare(a);
	result = sq.performOperation();
	cout<<"\n Square is : "<<result;
	
	cout<<"\n\n====================================================";
	

	
	return 0;
}
