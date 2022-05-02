#include<iostream.h>
#include<conio.h>
class A
{
	public:
	void getdata()
	{
		cout<<"hii..."<<endl;

	}
};
class B : public A
{
	public:
	void setdata()
	{
		cout<<"heloo"<<endl;

	}
};
class C : public A
{
	public:
	void putdata()
	{
		cout<<"Beloo..."<<endl;
	}
};
class D : public A
{
	public:
	void wetdata()
	{
		cout<<"Teloo..."<<endl;
	}
};
void main()
{
	clrscr();

	B B1;
	C C1;
	D D1;
	B1.getdata();
	B1.setdata();
	C1.putdata();
	D1.wetdata();
	getch();
}
