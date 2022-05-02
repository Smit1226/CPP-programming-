#include<iostream.h>
#include<conio.h>
void main()
{
	int no, i,j,k;
	clrscr();
	cout<<"enter the no :=";
	cin>>no;



	for(i=1;i<=no;i++)
	{

		for(j=no;j>=i;j--)
		{
		      cout<<" *";

		}
		for(k=1;k<i;k++)
		{
		cout<<"  ";
		}
		for(k=1;k<i;k++)
		{
		cout<<"  ";
		}
		for(j=no;j>=i;j--)
		{
			cout<<" *";
		}
		cout<<"\n";
	}

	for(i=no;i>=1;i--)
	{

		for(j=no;j>=i;j--)
		{
		      cout<<" *";

		}
		for(k=1;k<i;k++)
		{
		cout<<"  ";
		}
		for(k=1;k<i;k++)
		{
		cout<<"  ";
		}
		for(j=no;j>=i;j--)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
	getch();
}