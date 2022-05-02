#include<iostream.h>
#include<conio.h>
class A
{
	public:
	void getdata()
	{
		cout<<"hii";
	}
};
class B  : virtual public A
{
	public:
	void setdata()
	{
		cout<<"heloo";
	}
};
class C : public virtual A
{
	public:
	void putdata()
	{
	   cout<<"bye";
	}
};
class D : public B,public C
{
	public:
	void data()
	{
	   cout<<"byeEEEEEE";
	}
};

void main()
{
	clrscr();
	D D1;
	D1.getdata();
	D1.setdata();
	D1.putdata();
	D1.data();
	getch();
}
