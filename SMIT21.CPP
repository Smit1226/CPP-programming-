//static data FUNCTION

#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	static int count;
	void getdata()
	{
		count++;
		cout<<"ans is :="<<count<<endl;
	}
};
int abc :: count=0;
void main()
{
	clrscr();
	abc a1,a2,a3;
	a1.getdata();
	a2.getdata();
	a3.getdata();
	getch();
}

