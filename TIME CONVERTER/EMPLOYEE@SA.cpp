#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
	int emp_id, emp_age, emp_salary, emp_exp;
	char emp_name[9], emp_role[15], emp_city[12], emp_company_Name[15];
	
	public : void getData()
	{
		cout<<"Enter id"<<endl;
		cin>>emp_id;
		
		cout<<"Enter age"<<endl;
		cin>>emp_age;
		
		cout<<"Enter Salary"<<endl;
		cin>>emp_salary;
		
		cout<<"Enter Experience"<<endl;
		cin>>emp_exp;
		
		cout<<"Enter Name"<<endl;
		cin>>emp_name;
		
		cout<<"Enter Role"<<endl;
		cin>>emp_role;
		
		cout<<"Enter City";
		cin>>emp_city;
		
		cout<<"Enter Company Name";
		cin>>emp_company_Name;
	}
	
	public : void setData()
	{
		cout<<emp_id<<endl;
		cout<<emp_age<<endl;
		cout<<emp_salary<<endl;
		cout<<emp_exp<<endl;
		cout<<emp_name<<endl;
		cout<<emp_role<<endl;
		cout<<emp_city<<endl;
		cout<<emp_company_Name<<endl;
		
	}
	
};
main()
{
	Employee obj[5];
	int i;
	for(i=0;i<5;i++)
	{
		obj[i].getData();
	}
	for(i=0;i<5;i++)
	{
		obj[i].setData();
	}
		
	getch();
}
