//static data & member FUNCTION

#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	static int count;
	static void getdata()
	{
		count++;
		cout<<"ans is :="<<count<<endl;
	}
};
int abc :: count=0;
void main()
{
	clrscr();
	abc::getdata();
	abc::getdata();
	abc::getdata();
	getch();
}

