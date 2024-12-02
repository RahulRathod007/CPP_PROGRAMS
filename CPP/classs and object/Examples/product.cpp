#include<iostream>
#include<string.h>

using namespace std;

class Product
{
	int id;
	char name[90];
	int price;
	
	public:
		void setId(int i)
		{
			id = i;
		}
		int getId()
		{
			return id;
		}
		
		void setName(char n[])
		{
			strcpy(name,n);
		}
		
		char *getName()
		{
			return name;
		}
		
		void setPrice(int p)
		{
			price = p;
		}
		
		int getPrice()
		{
			return price;
		}
};

class Shop
{
	private:
	Product product;
	public:
		void setData(Product p)
		{
			product = p;
		}
		
		void showData()
		{
			cout<<"\n Product Id is : "<<product.getId();
			cout<<"\n Product Name is : "<<product.getName();
			cout<<"\n Product Price is : "<<product.getPrice();
		}
};

int main()
{
	Product p;
	Shop s;
	
	int id;
	char name[90];
	int price;
	
	cout<<"\n Enter Id : ";
	cin>>id;
	
	cout<<"\n Enter product name : ";
	_flushall();
	gets(name);
	
	cout<<"\n Enter Product price : ";
	cin>>price;
	
	p.setId(id);
	p.setName(name);
	p.setPrice(price);
	
	s.setData(p);
	s.showData();
	return 0;
}
