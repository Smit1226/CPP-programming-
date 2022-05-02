#include<iostream.h>
#include<conio.h>
class A
{
	protected:
	int rno,marks,total,per;

};
class B  : public A
{
	public:
	void setdata()
	{
		rno=90;
		cout<<"roll is:="<<rno;
	}
};
class C : public B
{
	public:
	void putdata()
	{
	   marks=90;
	   cout<<"marks is:="<<marks;
	}
};
void main()
{
	clrscr();
	C D1;
	D1.setdata();
	D1.putdata();
	getch();
}
