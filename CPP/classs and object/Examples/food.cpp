#include<iostream>
#include<stdlib.h>
#include<string.h>

using  namespace std;

class Food
{
	public:
	int id;	
	char name[90];
	int price;
	char category[50];
	public:
		void setFood(int i,char n[], int p, char cate[])
		{
			
			id = i;
			strcpy(name,n);
			price = p;
			strcpy(category, cate);
		}
		void getFood()
		{
			cout<<"\n Food id : "<<id;
			cout<<"\n Food Name : "<<name;
			cout<<"\n Food Price  : "<<price;
			cout<<"\n Food Category : "<<category<<"\n";	
			cout<<"\n============================================\n";
		}
		
		void sort_food_by_price(int food_count, Food *f)
		{
			for(int i = 0;i<food_count; i++)
			{
				for(int j = i+1; j<food_count;j++)
				{
					if((f+i)->price < (f+j)->price)
					{
						Food temp = f[i];
						f[i] = f[j];
						f[j] = temp;
//						int temp_id = (f+i)->id;
//						(f+i)->id = (f+j)->id;
//						(f+j)->id = temp_id;
//						
//						char temp_name[90];
//						strcpy(temp_name,(f+i)->name);
//						strcpy((f+i)->name,(f+j)->name);
//						strcpy((f+j)->name,temp_name);
//						
//						int temp_price = (f+i)->price;
//						(f+i)->price = (f+j)->price;
//						(f+j)->price = temp_price;
//						
//						char temp_category[90];
//						strcpy(temp_category,(f+i)->category);
//						strcpy((f+i)->category,(f+j)->category);
//						strcpy((f+j)->category,temp_category);
					}
				}
		 	
				cout<<"\n Sorting Successfully.......!!";
			}
			
		}
	
};

class User
{
	Food *f1;
	public:
	void update_Food_Details(int food_count, Food *f)
	{
		int flag =0,i=0;
		int ch;
		char ex;
		f1 = f;
			int update_by_id;
				char update_by_name[100];
				cout<<"\n\n Update Food Details ";
				
				do
				{
					
					cout<<"\n\n 1 : Update by Id ";
					cout<<"\n 2 : Update by Name ";
					cout<<"\n 11 :  Back ";
					
					cout<<"\n\n Enter your Choice : ";
					cin>>ch;
					
					switch(ch)
					{
						case 1: // Update by Id 
							{
								
							cout<<"\n\n Update Food by Id ";
							
							cout<<"\n\n  Enter Id : ";
							cin>>update_by_id;
							flag = 0;
							for(i = 0; i<food_count;i++)
							{
								if(update_by_id == (f1+i)->id)
								{
									flag = 1;
									break;
								}
							}
							if(flag)	
							{
								cout<<"\n Update Food Name : ";
								cout<<"\n Update Food Price : ";
								cout<<"\n Update Food Category : ";
								cout<<"\n\n";
		
								_flushall();
								gets((f1+i)->name);
								
								cin>>(f1+i)->price;
								
								_flushall();
								gets((f1+i)->category);
								
								printf("\n");
							}
							else
							{
								cout<<"\n Food Id is not Avaible in Database....!!";
							}
							break;
							}// Update food End case 1
						
						case 2 : // Update Food by Name
							{
								cout<<"\n\n Update Food by Name ";
								
								cout<<"\n\n  Enter Food Name : ";
								_flushall();
								gets(update_by_name);
								
								flag = 0;
								for(i = 0; i<food_count;i++)
								{
									if(strcmp(update_by_name,(f1+i)->name) == 0)
									{
										flag = 1;
										break;
									}
								}
								if(flag)	
								{
									cout<<"\n Update Food Name : ";
									cout<<"\n Update Food Price : ";
									cout<<"\n Update Food Category : ";
									cout<<"\n\n";
			
									_flushall();
									gets((f1 +i)->name);
									
									cin>>(f1+i)->price;
									
									_flushall();
									gets((f1+i)->category);
									
									cout<<"\n";
								}
								else
								{
									cout<<"\n Food Name is not Avaible in Database....!!";
								}
																	
							break;
							}//Update food End case 2 //
							
						case 11: // Back
						{
							break;
						}
						
						default:
						{
							cout<<"\n\n INVALID INPUT.....!!";
							break;
						}// Update food End case Default
					}
					
					cout<<("\n Do you want to Update another Food (Y/y for Yes) : ");
					cin>>ex;
				
				}while(ex == 'Y' || ex == 'y');
	}
	
	
	void search_Food_Details(int food_count,Food *f)
	{
		f1 = f;
		int flag = 0;
		int i = 0;
		int ch = 0;
		char ex;
		// Variable for Searching Food
		int search_by_id;
		char search_by_name[100];
		char search_by_category[100];
		int search_by_Range;
		
		cout<<"\n\n Search Food Details : ";
		
		do
		{
			cout<<"\n\n 1 : Search Food by Id : ";
			cout<<"\n 2 : Search Food by Name : ";
			cout<<"\n 3 : Search Food by Price Range : ";
			cout<<"\n 4 : Search Food by Category : ";
			cout<<"\n 11 :  Back ";
			
			cout<<"\n\n Enter Choice for Search Food : ";
			cin>>ch;
			
			switch(ch)
			{
				case 1 : // Search Food by Id
					{
						flag = 0;
						cout<<"\n\n Search Food By Id ";
						cout<<"\n\n Enter Food Id : ";
						cin>>search_by_id;
						
						int flag = 0;
						for(i = 0; i<food_count;i++)
						{
							if(search_by_id == (f1+i)->id)
							{
								flag = 1;
								break;
							}
						}
						if(flag)	
						{
							cout<<"\n\n Food Id: "<<(f1+i)->id;
							cout<<"\n Food Name : "<<(f1+i)->name;
							cout<<"\n Food Price : "<<(f1+i)->price;
							cout<<"\n Food Category : "<<(f1+i)->category;
							cout<<"\n";
						
							cout<<"\n";
						}
						else
						{
							cout<<"\n This Food Id is not Avaible in Database....!!";
						}
						
					 break;
					}// End Search Case 1
					
				case 2 : // Search Food by Name
					{
						flag = 0;
						cout<<"\n\n Search Food By Name ";
						cout<<"\n\n  Enter Food Name : ";
						_flushall();
						gets(search_by_name);
						int flag = 0;
						for(i = 0; i<food_count;i++)
						{
							if(strcmp(search_by_name,(f1+i)->name) == 0)
							{
								flag = 1;
								break;
							}
						}
						if(flag)	
						{
							cout<<"\n\n Food Id: "<<(f1+i)->id;
							cout<<"\n Food Name : "<<(f1+i)->name;
							cout<<"\n Food Price : "<<(f1+i)->price;
							cout<<"\n Food Category : "<<(f1+i)->category;
							cout<<"\n";
						}
						else
						{
							cout<<"\n Food Name is not Avaible in Database....!!";
						}
						
					 break;
					}// End Search Case 2
				
				case 3 : // Search Food by Price Range
					{
						cout<<"\n\n Search Food By Range ";
						
						cout<<"\n\n Enter Food Range : ";
						cin>>search_by_Range;
																
						for(i = 0; i<food_count;i++)
						{
							if((f1+i)->price <= search_by_Range)
							{
								cout<<"\n\n Food Id: "<<(f1+i)->id;
								cout<<"\n Food Name : "<<(f1+i)->name;
								cout<<"\n Food Price : "<<(f1+i)->price;
								cout<<"\n Food Category : "<<(f1+i)->category;
								cout<<"\n";																								
								cout<<"\n_________________________________________________";														
							}
						}
						
					 break;
					}// End Search Case 3
				
				case 4 : // Search Food By Categoty
					{
						cout<<"\n\n Search Food By Categoty ";
						
						cout<<"\n\n  Enter Food Categoty : ";
						_flushall();
						gets(search_by_category);
						
						int flag = 0;
						for(i = 0; i<food_count;i++)
						{
							if(strcmp(search_by_category,(f1+i)->category) == 0)
							{
								cout<<"\n\n Food Id: "<<(f1+i)->id;
								cout<<"\n Food Name : "<<(f1+i)->name;
								cout<<"\n Food Price : "<<(f1+i)->price;
								cout<<"\n Food Category : "<<(f1+i)->category;
								cout<<"\n";																																
								cout<<"\n_________________________________________________";													
							}
						}
						
					 break;
					}// End Search Case 4
					
				case 11: // Back
				{
					break;
				}
				
				default :
				{
					cout<<"\n\n INVALID INPUT.....!!";		
				 break;
				}// End Search Case default
			}
			
			cout<<"\n\n Do you want to Search Another Food (Y/y for Yes) : ";
			cin>>ex;
			
		}while(ex == 'Y' || ex == 'y');
	
	}// End  Search function
	
	//

};

class Temp
{
	public:
	int t_id;
	char t_name[90];
	int t_price;
	char t_category[90];
	
	void setTempId(int i)
	{
		t_id = i;
	}
	int getTempId()
	{
		return t_id;
	}
	
	int setTempName(char n[])
	{
		strcpy(t_name,n);
	}
	char *getTempName()
	{
		return t_name;
	}
	
	void setTempPrice(int p)
	{
		t_price = p;
	}
	int getTempPrice()
	{
		return t_price;
	}
	
	void setTempCate(char Cate[])
	{
		strcpy(t_category,Cate);
	}
	char *getTempCate()
	{
		return t_category;
	}
};

int main()
{
	int quan;
	int food_count=0;
	char ex;
	cout<<"\n Enter how many food do you want to add : ";
	cin>>quan;
	
	Food *f;
	
	User *user;
	user = new User();
	
	Temp *temp;
	temp = new Temp();
	
	f = (Food*)malloc(sizeof(Food) * quan);
	
	int fid;
	char fname[90];
	int fprice;
	char fcate[90];
	
	
	do
	{
		int ch;
		cout<<"\n 1 : Insert Multiple Details in Food : ";
		cout<<"\n 2 : View All Food Details : ";
		cout<<"\n 3 : Search Food Details By id, name, price, category : ";
		cout<<"\n 4 : Sort All food Details  by price : ";
		cout<<"\n 5 : Update Food Details by using Id and Food Name : ";
		cout<<"\n 6 : Delete Food Details by using Category : ";
		cout<<"\n 7 : Insert Multiple Details in Food : ";
		
		cout<<"\n\n\n Enter your Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1: 
				cout<<"\n Enter food id : ";
				cout<<"\n Enter food Name : ";
				cout<<"\n Enter food Price : ";
				cout<<"\n Enter food Category : \n";
				for(int i = 0;i<quan;i++)
				{
				
					cin>>fid;
					
					_flushall();
					gets(fname);
					
					cin>>fprice;
					
					_flushall();
					cin>>fcate;
					
					++food_count;
					(f+i)->setFood(fid, fname, fprice, fcate);
					
				}
				break;
			
			case 2:
				if(food_count>0)
				{
					for(int i = 0;i<food_count;i++)
					{
						(f+i)->getFood();
					} 
				}
				else
				{
					cout<<"\n Database Empty.......!!";
				}
			
				break;
			
			case 3: 	
				//user->search_Food_Details(food_count,f);
				user->search_Food_Details(food_count,f);
				break;
							 					
			case 4:
				f->sort_food_by_price(food_count,f); 
				break;
				
			case 5: 
				user->update_Food_Details(food_count,f);
			
				break;
			case 6:
				break;
			
			case 7:
				break;
		}
		
		cout<<"\n Do you want to continue : ";
		cin>>ex;
	}while(ex == 'y' || ex == 'Y');
	
	delete user; // Deallocate memory for the user
    free(f); // Deallocate memory for food array
	
	
	return 0;	
}
