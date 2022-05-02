#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[5],i,ps,no1 ;
	clrscr();
	for(i=0;i<5;i++)
	{
		cout<<"enter the array element := ";
		cin>>arr[i];

	}
	for(i=0;i<5;i++)
	{
		cout<<"\narray is :="<<arr[i];
	}
	    cout<<"\n";
	    cout<<"enter the possition to be deleted :=";
	    cin>>ps;


	for(i=ps;i<5;i++)
	{

		arr[i]=arr[i+1];
	}
	for(i=0;i<4;i++)
	{
	     cout<<"\n"<<arr[i];
	}


	getch();
 }