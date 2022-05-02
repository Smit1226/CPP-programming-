#include<iostream.h>
#include<conio.h>
void main()
{
	int no, i,j;
	clrscr();
	cout<<"enter the no :=";
	cin>>no;

	for(i=1;i<=no;i++)
	{
		if(i%2==1)
		{

			for(j=1;j<=no;j++)
			{
			cout<<j;
			}
		}
		else
		{
			for(j=no; j>=1; j--)
			{
			cout<<j;
			}
		}
		cout<<"\n";
	}
	getch();
}