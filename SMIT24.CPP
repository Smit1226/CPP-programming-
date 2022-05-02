//constructor
//1.default... 2.parameterize.. 3.copy
//constrictor name and class name are same
//no calling is required it is called automatically

#include<iostream.h>
#include<conio.h>
class con
{
	public:
	int a,b;
	//1.default
	con()
	{
		cout<<"smit shiroya"<<endl;
	}
	//2.parameterized
	con(int x,int y)
	{
		a=x;
		b=y;
		cout<<"sum is :="<<a+b;
	}
};
void main()
{
	clrscr();
	con c1;
	con c2(10,20);
	getch();
}

