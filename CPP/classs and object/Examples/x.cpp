#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Customer
{
	private:
		int cid;
		char cname[90];
		char address[30];
		char email[30];
		char contact[12];
		int mcalls;
	
	public:
		void setId(int i)
		{
			cid = i;
		}
		
		int getId()
		{
			return cid;
		}
		
		void setname(char name[])
		{
			strcpy(cname,name);
		}
		
		char *getname()
		{
			return cname;
		}
		
		void setAddress(char add[])
		{
			strcpy(address,add);
		}
		
		char *getAddress()
		{
			return address;
		}
		
		void setEmail(char mail[])
		{
			strcpy(email,mail);
		}
		
		char *getEmail()
		{
			return email;
		}
	
		void setContact(char con[])
		{
			strcpy(contact,con);
		}
		
		char *getContact()
		{
			return contact;
		}
	
		void setCalls(int call)
		{
			mcalls = call;
		}
		
		int getCalls()
		{
			return mcalls;
		}
	
	
	
};

class Telephone
{
	
	Customer *cust;
		public:
	void setCustomer(Customer *c)
	{
		cust = c;
	}
	
	void calBill()
	{
		int bill;
		int call;
		
		cout<<"\n Enter customer id : "<<cust->getId();
		cout<<"\n Enter customer Name : "<<cust->getname();
		cout<<"\n Enter customer Address : "<<cust->getAddress();
		cout<<"\n Enter customer Email id : "<<cust->getEmail();
		cout<<"\n Enter customer Contact No. : "<<cust->getContact();
		cout<<"\n Enter customer Monthly Calls : "<<cust->getCalls()<<"\n";
		
		call = cust->getCalls();
		if(call > 0 && call <= 100)
		{
			bill = 200;
		}
		else if(call >100 && call < 150)
		{
			call = call - 100;
			bill = 200 + (call * 0.60);
		}
		
		else if(call > 150 && call <= 200)
		{
			call = call - 150;
			bill = 200 + 0.60 + (call * 0.50);	
		}
		
		else if(call > 200)
		{
			call = call - 200;
			bill = 200 + 0.60 + 0.50 + (call * 0.40);			
		}
		
		cout<<"\n Total Bill is : "<<bill;
	}
};

int main()
{
	int len;
	cout<<"\n Enter size of an array : ";
	cin>>len;
	
	Customer *c;
	c = (Customer*)malloc(sizeof(Customer)*len);
	
	Telephone t;
	int Id;
	char Cname[90];
	char Address[30];
	char Email[30];
	char Contact[12];
	int Mcalls;
	
	cout<<"\n Enter customer id : ";
	cout<<"\n Enter customer Name : ";
	cout<<"\n Enter customer Address : ";
	cout<<"\n Enter customer Email id : ";
	cout<<"\n Enter customer Contact No. : ";
	cout<<"\n Enter customer Monthly Calls : "<<"\n";
	for(int i = 0;i<len;i++)
	{
		cin>>Id;
		_flushall();
		gets(Cname);
		gets(Address);
		gets(Email);
		gets(Contact);
		cin>>Mcalls;
		
		c[i].setId(Id)	;
		c[i].setname(Cname);
		c[i].setAddress(Address);
		c[i].setEmail(Email);
		c[i].setContact(Contact);
		c[i].setCalls(Mcalls);
		
	}
	for(int i = 0 ; i < len; i++)
    {
        t.setCustomer(&c[i]);
        t.calBill();
        cout<<"\n";
    }

	delete[]c;
	return 0;
}

			/*
				1
				Nandu More
				Karad
				nandumore1232@gmail.com
				9088123214
				120
				
				2
				Nandu Jadhav
				Pune
				nandujadhav1232@gmail.com
				9188123214
				155
				
				3
				Nandu Lokhnade
				Satara
				nandulokhnade1232@gmail.com
				9789342358
				100
				
				4
				Shubham More
				Nimsod
				shuhammore1232@gmail.com
				9128746329
				230
				
				
			*/

