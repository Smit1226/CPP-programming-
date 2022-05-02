#include<iostream.h>
#include<conio.h>
class A
{
	public:
	void getdata()
	{
		int rno;
		cout<<"enter the roll no:=";
		cin>>rno;

		cout<<"roll no is :="<<rno<<endl;

	}
};
class B  : public A
{
	public:
	int sum;
	void setdata()
	{
		int maths,sci,ss;
		cout<<"\nenter maths marks :=";
		cin>>maths;

		cout<<"enter sci marks :=";
		cin>>sci;

		cout<<"enter ss marks :=";
		cin>>ss;
		cout<<"\n";
		cout<<"your maths marks is :="<<maths<<endl;
		cout<<"your science marks is :="<<sci<<endl;
		cout<<"your ss marks is :="<<ss<<endl;
		sum=maths+sci+ss;

	}
};
class C
{
	public:
	int sport;
	void putdata()
	{

		cout<<"\nenter your sports marks:=";
		cin>>sport;
		cout<<"your sport marks is :="<<sport<<endl;

	}
};
class D : public B , public C
{
	public:
	int total,per;
	void wetdata()
	{
		int total,per;
		total=sum+sport;
		per=total/4;
		cout<<"\nyour total marks of all is :=" <<total<<endl;
		cout<<"percentage is :="<<per<<endl;
	}
};
void main()
{
	clrscr();
	D D1;
	D1.getdata();
	D1.setdata();
	D1.putdata();
	D1.wetdata();
	getch();
}
