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
class B
{
	public:
	void setdata()
	{
		cout<<"heloo"<<endl;

	}
};
class C : public B , public A
{
	public:
	void putdata()
	{
		cout<<"Beloo..."<<endl;
	}
};
void main()
{
	clrscr();
	C C1;
	C1.getdata();
	C1.setdata();
	C1.putdata();
	getch();
}
