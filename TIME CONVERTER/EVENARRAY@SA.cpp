#include<iostream>
#include<conio.h>
using namespace std;
main()
{
int a[5];
int i;
cout<<"Enter Even"<<endl;
	for(i=0;i<5;i++)
 	{  
  		cin>>a[i];  //10 11 12 13 14
	}	
	cout<<"----------------------------------------------------- "<<endl;
	for(i=0;i<5;i++)
	{
	if(a[i]%2==0)
	{
		
	
		cout<<a[i];	}
	}	
getch();	
 } 
