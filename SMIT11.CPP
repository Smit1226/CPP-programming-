#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	int no1,no2,sum;
	void getdata()
	{
		cout<<"enter the no1:=";
		cin>>no1;
		cout<<"enter the no2:=";
		cin>>no2;
		sum=no1+no2;
		cout<<"sum is:="<<sum;
	}
};
void main()
{
	clrscr();
	demo d1;
	d1.getdata();
	getch();
}
