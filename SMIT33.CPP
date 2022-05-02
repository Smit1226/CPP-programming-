#include<iostream.h>
#include<conio.h>
class A
{
	 public:
	virtual void display()
	{
		cout << "Base class is invoked"<<endl;
	}
};
class B:public A
{
	public:
	void display()
	{
		cout << "Derived Class is invoked"<<endl;
	}
};
void main()
{
	clrscr();
	A *a1;
	A aaa;
	a1=&aaa;
	a1->display();

	B b1;
	a1=&b1;
	a1->display();

	getch();
}
