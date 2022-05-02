#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	int no;
	void getdata()
	{
		int f=0;
		cout<<"enter the no to be reversed:=";
		cin>>no;
		while (no!=0)
		{
			f=f*10;
			f=f+no%10;
			no=no/10;
		}
		cout<<"reverse of number is := "<<f;
       }

};
void main()
{
	clrscr();
	demo d1;
	d1.getdata();
	getch();
}
