#include<iostream.h>
#include<conio.h>
class demo
{
	public:
	int no,i;
	void getdata()
	{
		int f=0;
		cout<<"enter the no to check:=";
		cin>>no;
		for(i=2;i<no;i++)
		{
			if(no % i== 0)
			{
				f=1;
				break;
			}

		}
			if(f==0)
			{
				cout<<"no is prime";
			}
			else
			{
				cout<<"no is not prime";
			}


       }

};
void main()
{
	clrscr();
	demo d1;
	d1.getdata();
	getch();
}
