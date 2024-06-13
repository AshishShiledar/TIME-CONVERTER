#include<iostream>
#include<conio.h>
using namespace std;
class car 
{
	int car_id, car_release_year;
	char car_model[10], car_colour[15],car_company_Name[15];
	
	public : void getData()
	{
		cout<<"Enter id"<<endl;
		cin>>car_id;
		
		cout<<"Enter colour"<<endl;
		cin>>car_colour;
		
		
		
		cout<<"Enter car  release year"<<endl;
		cin>>car_release_year;
		
		
		
		cout<<"Enter model"<<endl;
		cin>>car_model;
		
		
		cout<<"Enter Company Name";
		cin>>car_company_Name;
	}
public : void setData()
	{
		cout<<car_id<<endl;
		cout<<car_colour<<endl;
		cout<<car_release_year<<endl;
		cout<<car_model<<endl;
		cout<<car_company_Name<<endl;
		
	}
	
};
main()
{
car obj[4];
	int i;
	for(i=0;i<4;i++)
	{
		obj[i].getData();
	}
	for(i=0;i<4;i++)
	{
		obj[i].setData();
	}
		
	getch();		
}



















