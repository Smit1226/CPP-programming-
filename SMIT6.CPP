#include<iostream.h>
#include<conio.h>
void main()
{
	int no, i=1 , sum=0;
	clrscr();
	cout<<"enter the no :=";
	cin>>no;

	while(i<=no)
	{
		cout<<"\n "<<no;
		sum=sum + no ;
		no--;
	}

	cout<<"\nsum is := "<<sum;
	getch();
}