//class overidding
#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	void show()
	{
		cout<<"hiii...";
	}

};
class xyz : public abc
{
	public:
	void show()
	{
		abc :: show();
		cout<<"helloo...";
	}
};
void main()
{
	clrscr();
	xyz x1;
	x1.show();
	getch();
}