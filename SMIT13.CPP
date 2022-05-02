#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	int i,no;
	void getdata(int x)
	{

		no = x ;
		int mul=1 ;
		for(i=1;i<=no;i++)
		{
		mul = mul * i;

		}
		cout<<"factorial is := "<<mul<<"\n";
	}
};
void main()
{
	clrscr();
	demo d1;
	d1.getdata(5);
	getch();
}
