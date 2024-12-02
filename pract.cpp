#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int n=0;
class Employee
{
	private:
		int id,salary;
		char name[90],email[90],contact[90],address[90];
	public:
		void setId(int a)
		{
			id = a;
		}
		int getId()
		{
			return id;
		}
		void setName(char a[])
		{
			strcpy(name,a);
		}
		char *getName()
		{
			return name;
		}
		void setEmail(char a[])
		{
			strcpy(email,a);
		}
		char *getEmail()
		{
			return email;
		}
		void setContact(char a[])
		{
			strcpy(contact,a);
		}
		char *getContact()
		{
			return contact;
		}
		void setAddress(char a[])
		{
			strcpy(address,a);
		}
		char *getAddress()
		{
			return address;
		}
		void setSalary(int a)
		{
			salary = a;
		}
		int getSalary()
		{
			return salary;
		}

};
class Company
{
	public:
	Employee emp[5];
	private:
		int id , salary;
		char name[90],email[90],contact[90],address[90];
	public:
	void set()
	{	cout<<"enter id name email contct address salay"<<endl;
		cin>>id>>name>>email>>contact>>address>>salary;
		emp[n].setId(id);
		emp[n].setName(name);
		emp[n].setEmail(email);
		emp[n].setContact(contact);
		emp[n].setAddress(address);
		emp[n].setSalary(salary);
		n++;
	}
	void get()
	{
		int temp=0;
		cout<<"all employee details: "<<endl<<endl<<endl;
		while(temp<n)
		{
			cout<<emp[temp].getId()<<endl;
			cout<<emp[temp].getName()<<endl;
			cout<<emp[temp].getEmail()<<endl;
			cout<<emp[temp].getContact()<<endl;
			cout<<emp[temp].getAddress()<<endl;
			cout<<emp[temp].getSalary()<<endl<<endl<<endl;
			temp++;
		}
	}
	void Search()
	{
        int choice,temp=0,flag=0;
        int Sid,Ssalary;
        char Sname[90],Semail[90],Saddress[90];
            cout<<"Enter your choice:"<<endl;
            cout<<"1: search by id"<<endl;
            cout<<"2: search by name"<<endl;
            cout<<"3: search by email"<<endl;
            cout<<"4: search by salary"<<endl;
            cout<<"5: search by address"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                {
                    cout<<"enter id to search: "<<endl;
                    cin>>Sid;
                    while(temp<=n)
                    {
                        if(emp[temp].getId()==Sid)
                        {
                            cout<<emp[temp].getId()<<endl;
                            cout<<emp[temp].getName()<<endl;
                            cout<<emp[temp].getEmail()<<endl;
                            cout<<emp[temp].getContact()<<endl;
                            cout<<emp[temp].getAddress()<<endl;
                            cout<<emp[t emp].getSalary()<<endl<<endl<<endl;
                            flag = 1;
                        }
                        temp++; 
                    }
                    if(flag==0)
                    {
                        cout<<"id not present"<<endl;
                    }
                    break;
                }
            case 2:
                {
                    flag = 0;
                    int gflag = 1;
                    temp = 0;
                    cout<<"enter name to search: "<<endl;
                    cin>>Sname;
                   while(temp<=n)
                    {
                        gflag = strcmp(emp[temp].getName(),Sname);
                        if(gflag==0)
                        {
                            cout<<emp[temp].getId()<<endl;
                            cout<<emp[temp].getName()<<endl;
                            cout<<emp[temp].getEmail()<<endl;
                            cout<<emp[temp].getContact()<<endl;
                            cout<<emp[temp].getAddress()<<endl;
                            cout<<emp[temp].getSalary()<<endl<<endl<<endl;
                            flag = 1;
                            gflag = 1;
                        }
                        temp++;
                    }
                    if(flag==0)
                    {
                        cout<<"name not present"<<endl;
                    }
                    break;
                }
            case 3:
                {
                    flag = 0;
                    int gflag = 1;
                    temp = 0;
                    cout<<"enter email to search: "<<endl;
                    cin>>Semail;
                    while(temp<=n)
                    {

                        gflag = strcmp(emp[temp].getEmail(),Semail);
                        if(gflag==0)
                        {
                            flag = 1;
                            cout<<emp[temp].getId()<<endl;
                            cout<<emp[temp].getName()<<endl;
                            cout<<emp[temp].getEmail()<<endl;
                            cout<<emp[temp].getContact()<<endl;
                            cout<<emp[temp].getAddress()<<endl;
                            cout<<emp[temp].getSalary()<<endl<<endl<<endl;
                            gflag = 1;
                        }
                        temp++;
                    }
                    if(flag==0)
                    {
                        cout<<"email not present"<<endl;
                    }
                    break;
                }
            case 4:
                {
                    cout<<"enter salary to search: "<<endl;
                    cin>>Ssalary;
                    while(temp<=n)
                    {
                        if(emp[temp].getSalary()==Ssalary)
                        {
                            cout<<emp[temp].getId()<<endl;
                            cout<<emp[temp].getName()<<endl;
                            cout<<emp[temp].getEmail()<<endl;
                            cout<<emp[temp].getContact()<<endl;
                            cout<<emp[temp].getAddress()<<endl;
                            cout<<emp[temp].getSalary()<<endl<<endl<<endl;
                            flag = 1;
                        }
                        temp++;
                    }
                    if(flag==0)
                    {
                        cout<<"salary not present"<<endl;
                    }
                    break;
                }
            case 5:
                {
                    flag = 0;
                    int gflag = 1;
                    temp = 0;
                    cout<<"Enater address to search: "<<endl;
                    cin>>Saddress;
                    while(temp<=n)
                    {

                        gflag = strcmp(emp[temp].getAddress(),Saddress);
                        if(gflag==0)
                        {
                            cout<<emp[temp].getId()<<endl;
                            cout<<emp[temp].getName()<<endl;
                            cout<<emp[temp].getEmail()<<endl;
                            cout<<emp[temp].getContact()<<endl;
                            cout<<emp[temp].getAddress()<<endl;
                            cout<<emp[temp].getSalary()<<endl<<endl<<endl;
                            flag = 1;
                            gflag = 1;
                        }
                        temp++;
                    }
                    if(flag==0)
                    {
                        cout<<"Address not present"<<endl;
                    }
                    break;
                }
            default :
                {
                    cout<<"Invalid Choice"<<endl;
                }
            }
	}
    void Delete()
    {
        int choice,Sid,temp,flag=0;
            cout<<"Enter your choice:"<<endl;
            cout<<"1: delete by id"<<endl;
            cout<<"2: delete by name"<<endl;
            cout<<"3: delete by email"<<endl;
            cout<<"4: delete by salary"<<endl;
            cout<<"5: delete by address"<<endl;
            cin>>choice;
            switch(choice)
            {
            case 1:
                {
                    cout<<"enter id to search: "<<endl;
                    cin>>Sid;
                    while(temp<=n)
                    {
                        if(emp[temp].getId()==Sid)
                        {
                            cout<<emp[temp].getId()<<endl;
                            cout<<emp[temp].getName()<<endl;
                            cout<<emp[temp].getEmail()<<endl;
                            cout<<emp[temp].getContact()<<endl;
                            cout<<emp[temp].getAddress()<<endl;
                            cout<<emp[temp].getSalary()<<endl<<endl<<endl;
                            flag = 1;
                        }
                        temp++;
                    }
                    if(flag==0)
                    {
                        cout<<"id not present"<<endl;
                    }+                    break;
                }
            case 2:
                {
                    break;
                }
            }
    }
};
int main()
{
	Company com;
	int choice,i;
	char ch;
	do
	{
	cout<<"enter choice: "<<endl;
	cout<<"1: Enter  employee  data"<<endl;
	cout<<"2: Display employee data"<<endl;
	cout<<"3: Search Employee using"<<endl;
	cout<<"4: delete employee  using"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			{
				com.set();
				break;
			}
		case 2:
			{
				com.get();
				break;
			}
		case 3:
			{
                com.Search();
                break;
			}
        case 4:
            {
                com.Delete();
                break;
            }
	}
	ch = getch();
	}while(ch!='q'||ch!='Q');
}