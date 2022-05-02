#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	int i,n;
	void setdata(int x)
	{
		n = x;
		int mul=1;

		for(i=1;i<=x;i++)
		{
			mul=mul * i;
		}
			cout<<"factorial is :="<<mul<<"\n";


			putdata(x);
	 }
	 void putdata(int x)
	 {

		int i,t1=0,t2=1,nextterm=0;


		cout<<"fibonacci series:";

		for (i=1;i<=x;i++)
		{
			if(i==1)
			{
				cout<<"  "<<t1;
				continue;
			}
			if (i==2)
			{
				cout<<t2 <<"  ";
				continue;
			}

			nextterm= t1 + t2;
			t1 = t2;
			t2 = nextterm;

			cout<<nextterm<<"  ";
		}
	 }
};
void main()
{

	clrscr();
	abc a1;
	a1.setdata(5);
	getch();
}




