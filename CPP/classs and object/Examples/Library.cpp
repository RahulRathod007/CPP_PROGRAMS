#include<iostream>
#include<string.h>
#include<stdlib.h>

											/*
											
											12345
											Don
											nandu
											120
											
											12346
											Don
											nandu
											400
											
											*/
using namespace std;

class Library
{
	long int acce_no; // accession number
	char book_title[90];
	char author_name[90];
	int book_price;
	
	Library *lib1;
	public:
		void Add_Book(long int no, char a_name[], char b_title[], int p)
		{
			acce_no = no;
			strcpy(author_name,a_name);
			strcpy(book_title,b_title);
			book_price = p;
		}
		
		void Display_Books()
		{
			cout<<"\n Book Accesion Number : "<<acce_no;
			cout<<"\n Book Title : "<<book_title;
			cout<<"\n Book Auther Name : "<<author_name;
			cout<<"\n Book Price : "<<book_price;
			cout<<"\n";	
		}
		
		void asscending_order_accno(int book_count,Library *l)
		{
			lib1 = l;
			for(int i = 0;i<book_count;i++)
			{
				for(int j = i+1; j<book_count;j++)
				{
					if((l+i)->acce_no > (l+j)->acce_no)
					{
						Library temp = l[i];
						l[i] = l[j];
						l[j] = temp;
					}
				}
			}
			cout<<"\n\n Sorting Successfully\n";
		}
		
		char *GetAuthorName() 
		{
	        return author_name;
	    }
	
	    char *GetTitle() 
	   {
	        return book_title;
	    }
	
	    long int GetAccessionNumber() 
		{
	        return acce_no;
	    }
	
	    int GetPrice()
	    {
	        return book_price;
	    }
		
		
};



int main()
{
	int book_q;
	int book_count=0;
	char ex;
	cout<<"\n Enter how many Books do you want to add : ";
	cin>>book_q;
	
	Library *lib;
	
	//Book *book;
	//book = new Book();
	
	lib = (Library*)malloc(sizeof(Library) * book_q);
	
	int b_acc_no;
	char b_title[90];
	char author_name[90];
	int b_price;
	
	
	do
	{
		int ch;
		cout<<"\n 1 : Add Book Details : ";
		cout<<"\n 2 : Display All Book Details : ";
		cout<<"\n 3 : Display List of all book of given author : ";
		cout<<"\n 4 : Display List the title of specified book : ";
		cout<<"\n 5 : Display List count of the book in the Library : ";
		cout<<"\n 6 : Display List of books in the ascending order of accession number : ";
		cout<<"\n 7 : Update book details by title of book : ";
		cout<<"\n 8 : Delete details by price : ";
		cout<<"\n 9 : Exit : ";
		
		cout<<"\n\n\n Enter your Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1: 
				cout<<"\n Enter Accession Number  : ";
				cout<<"\n Enter Title of Book : ";
				cout<<"\n Enter Author Name : ";
				cout<<"\n Enter Book Price : ";
				cout<<"\n";
				
				for(int i = 0;i<book_q;i++)
				{
				
					cin>>b_acc_no;
					
					_flushall();
					gets(b_title);
					
					gets(author_name);
					
					cin>>b_price;				
					
					++book_count;
					(lib+i)->Add_Book(b_acc_no,b_title,author_name,b_price);
					
				}
				break;
			
			case 2:
				if(book_count>0)
				{
					for(int i = 0;i<book_count;i++)
					{
						(lib+i)->Display_Books();
					} 
				}
				else
				{
					cout<<"\n Database Empty.......!! Please First Insert Data....!!"<<"\n";
				}
			
				break;
			
			case 3: 	
				cout<<"\n Enter Author Name : ";
				_flushall();
				gets(author_name);
				for(int i =0;i<book_count;i++)
				{
					if(strcmp((lib+i)->GetAuthorName(),author_name)==0)
					{
						(lib+i)->Display_Books();
					}
				}
				//book->Display_books_byAuthor(author_name,book_count,lib);
				break;
							 					
			case 4:
				 cout<<"\n Enter Book Title Name : ";
				_flushall();
				gets(b_title);
				for(int i =0;i<book_count;i++)
				{
					if(strcmp((lib+i)->GetTitle(),b_title)==0)
					{
						(lib+i)->Display_Books();
					}
				}
				break;
				
			case 5: 
				
				cout<<"\n  List count of the book in the Library : "<<book_count;
				cout<<"\n";
				break;
			case 6:
				lib->asscending_order_accno(book_count,lib);
				break;
			
			case 7:
				break;
		}
		
		cout<<"\n Do you want to continue : ";
		cin>>ex;
	}while(ex == 'y' || ex == 'Y');
	
	//delete book; // Deallocate memory for the user
    free(lib); // Deallocate memory for food array
	
	return 0;
}
