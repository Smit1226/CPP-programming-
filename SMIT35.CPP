#include<iostream.h>
#include<conio.h>
class space
{
	int x;
	int y;
	int z;
	public :
	void getdata(int a, int b, int c);
	void display();
	void operator-();
};
void space :: getdata(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}
void space :: display ()
{
	cout<< x << " ";
	cout<< y << " ";
	cout<< z << "\n";
}
void space :: operator-()
{
	x= -x;
	y= -y;
	z= -z;
}
void main()
{
	clrscr();
	space S;
	S.getdata(10,-20,30);

	cout<< "S : " ;
	S.display();

	-S;

	cout << "S :" ;
	S.display();

	getch();
}
