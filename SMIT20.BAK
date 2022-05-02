//friend function

#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	int a,b;
	void getdata(int x, int y);
	friend int display(abc aa);
};

void abc :: getdata(int x, int y)
{
	a=x;
	b=y;
}
int display(abc aa)
{
	int c;
	c=aa.a+aa.b;
	return c;

}
void main()
{
	int yy;
	clrscr();
	abc a1;
	a1.getdata(10,20);
	yy=display(a1);
	cout<<"sum is := "<<yy;
	getch();
}

