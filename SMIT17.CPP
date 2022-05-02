#include<iostream.h>
#include<conio.h>
class Railway
{
	public:
	int tno;
	char tname[30],source[30],destination[30];
	float time;
	void getdata();
	void setdata();
};

void Railway :: getdata()
{
	cout<<"enter the train number         :=";
	cin>>tno;
	cout<<"enter the train name           :=";
	cin>>tname;
	cout<<"enter the train source         :=";
	cin>>source;
	cout<<"enter the train destination    :=";
	cin>>destination;
	cout<<"enter the train time           :=";
	cin>>time;
	cout<<endl;
}

void Railway :: setdata()
{
	cout<<"the train number is        :="<<tno<<endl;
	cout<<"the train name is          :="<<tname<<endl;
	cout<<"the train source is        :="<<source<<endl;
	cout<<"the train destination is   :="<<destination<<endl;
	cout<<"the train time is          :="<<time<<endl;
	cout<<endl;

}
void main ()
{
	Railway r1[5];
	int i,count;
	clrscr();
	cout<<"################### RAILWAY RESERVATION #################"<<endl;
	cout<<"enter the record of train      := ";
	cin>>count;
	for(i=0;i<count;i++)
	{
		r1[i].getdata();
	}
	for(i=0;i<count;i++)
	{
		r1[i].setdata();

	}
	getch();
}
