#include<iostream>
#include <iomanip>
#include <string>
using namespace std;
int rounded(float gross,float per,float donate,float netsale)
{
	gross = static_cast<int>(gross * 100) / 100.0;
	per = static_cast<int>(per * 100) / 100.0;
	donate = static_cast<int>(donate * 100) / 100.0;
	netsale = static_cast<int>(netsale * 100) / 100.0;
	cout<<"Gross Amount: .................. $"<<gross<<endl;
	cout<<"Percentage of Gross Amount Donated:"<<per<<"%"<<endl;
	cout<<"Amount Donated:.................. $"<<donate<<endl;
	cout<<"Net Sale:.................. $"<<netsale<<endl;

}
int main()
{
	string movie;
	int ATS,CTS;
	float ATP,CTP,percent;
	cout<<"Enter Movie name: ";
	getline(cin,movie);//fix space issue
	cout<<"Enter adult ticket price:";
	cin>>ATP;
	if(ATP<0)
	{
		cout<<"Invalid Input";
		exit(1);
	}
	cout<<"Enter Child ticket price:";
	cin>>CTP;
	if(CTP<0)
	{
		cout<<"Invalid Input";
		exit(1);
	}
	cout<<"Enter Adult ticket sold:";
	cin>>ATS;
	if(ATS<0)
	{
		cout<<"Invalid Input";
		exit(1);
	}
	cout<<"Enter Child ticket sold:";
	cin>>CTS;
	if(CTS<0)
	{
		cout<<"Invalid Input";
		exit(1);
	}
	cout<<"Enter percentage to donate:";
	cin>>percent;
	if(percent<0)
	{
		cout<<"Invalid Input";
		exit(1);
	}
	int ticketsold=ATS+CTS;
	float gross=(ATS*ATP)+(CTS*CTP);
	float donate=(gross*percent)/100;
	float netsale=gross-donate;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
	cout<<"Movie name:.................."<<movie<<endl;
	cout<<"Number of Ticket sold:......."<<ticketsold<<endl;
	rounded(gross,percent,donate,netsale);
}