
#include<iostream.h>
#include<conio.h>
class banking
{
	public:
	int acno, balance;
	char acname[30],actype[30],branch[30];
	void getdata();
	void setdata();
	void putdata(int tn,int deposit);
	void wdata(int tn,int withdraw);
};

void banking :: getdata()
{
	cout<<"enter the account number         :=";
	cin>>acno;
	cout<<"enter the account name           :=";
	cin>>acname;
	cout<<"enter the account type           :=";
	cin>>actype;
	cout<<"enter the account balance        :=";
	cin>>balance;
	cout<<"enter the account branch         :=";
	cin>>branch;
	cout<<endl;
}

void banking :: setdata()
{
	cout<<"the account number is        :="<<acno<<endl;
	cout<<"the account name is          :="<<acname<<endl;
	cout<<"the account type is          :="<<actype<<endl;
	cout<<"the account balance is       :="<<balance<<endl;
	cout<<"the account branch is        :="<<branch<<endl;
	cout<<endl;

}
void banking :: putdata(int tn,int deposit)
{
	if(tn==acno)
	{
		balance=balance+deposit;
		cout<<"the account number is        :="<<acno<<endl;
		cout<<"the account name is          :="<<acname<<endl;
		cout<<"the account type is          :="<<actype<<endl;
		cout<<"the account balance is       :="<<balance<<endl;
		cout<<"the account branch is        :="<<branch<<endl;
		cout<<endl;
	}
}
void banking :: wdata(int tn,int withdraw)
{
	if(tn==acno)
	{
		balance=balance-withdraw;
		cout<<"the account number is        :="<<acno<<endl;
		cout<<"the account name is          :="<<acname<<endl;
		cout<<"the account type is          :="<<actype<<endl;
		cout<<"the account balance is       :="<<balance<<endl;
		cout<<"the account branch is        :="<<branch<<endl;
		cout<<endl;
	}
}
void main ()
{
	banking r1[5];
	int i,count,deposit,tn,withdraw,ch1;
	clrscr();
	cout<<"######### BANK MANAGEMENT SYSTEM ##########"<<endl;
	cout<<"enter the record of ACCOUNT      := ";
	cin>>count;
	for(i=0;i<count;i++)
	{
		r1[i].getdata();
	}
	for(i=0;i<count;i++)
	{
		r1[i].setdata();

	}



		cout<<"1.deposit\n2.withdraw\n";
		cout<<"enter your choice :=";
		cin>>ch1;
		cout<<endl;

	switch(ch1)
	{
		case 1:

	cout<<"enter the account no to deposit :=";
	cin>>tn;
	cout<<"enter the amount to deposit :=";
	cin>>deposit;
	cout<<endl;


	for(i=0;i<count;i++)
	{
		r1[i].putdata(tn,deposit);

	}


	break;

		case 2:

	cout<<"enter the account no to withdraw :=";
	cin>>tn;
	cout<<"enter the amount to withdraw :=";
	cin>>withdraw;
	cout<<endl;
	for(i=0;i<count;i++)
	{
		r1[i].wdata(tn,withdraw);

	}


       }
	getch();
}
