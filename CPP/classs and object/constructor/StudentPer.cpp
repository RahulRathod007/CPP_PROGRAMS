#include<iostream>

using namespace std;

class StudentPer 
{
	int *ptr;
	int len;
	int percentage;
	int total;
	public:
		StudentPer(int a[], int len)
		{
			ptr = a;
			this->len = len;
		}
		
		void calPer()
		{
			for(int i=0;i<len;i++)
			{
				total = total + ptr[i];
			}
			
			percentage = total/len;
			
		}
		
		void checkGrades()
		{
			//this function can use check the grade.
			if(percentage >= 90)
			{
				cout<<"\n Grade A";
			} 
			else if(percentage >= 80)
			{
				cout<<"\n Grade B";
			} 
	 		else if(percentage >= 70)
			{
				cout<<"\n Grade C";
			}
			else if(percentage >= 60)
			{
				cout<<"\n Grade D";
			}
			else if(percentage >= 50)
			{
				cout<<"\n Grade E";
			}
			else if(percentage >= 40)
			{
				cout<<"\n Grade F";
			}
			else
			{
				cout<<"\n Student is Fail";
			}
		}
};

int main()
{
	int len;
	cout<<"\n Enter size of an array : ";
	cin>>len;
	
	int arr[len];
	
	cout<<"\n Enter Subject marks : ";
	for(int i = 0;i<len;i++)
	{
		cin>>arr[i];
	}
	
	StudentPer s(arr,len);
	
	s.calPer();
	s.checkGrades();
	return 0;
}
