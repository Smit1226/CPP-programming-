#include<iostream.h>
#include<conio.h>
void main()
{
	int no1,no2,sum;
	clrscr();
	cout<<"enter the no1 :=";
	cin>>no1;

	cout<<"enter the no2 :=";
	cin>>no2;

	sum=no1+no2;

	cout<<"sum is :="<<sum;

	if(sum > 10)
	{
	cout<<"\nsum is greater than 10";
	}
	else if (sum < 10)
	{
	cout<<"\nsum is less than 10";
	}
	else
	{
	cout<<"\nsum is equal to 10";
	}

	getch();
}