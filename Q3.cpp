#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	string name;
	int id;
	float unit;
	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter Id:";
	cin >> id;
	cout << "Enter Unit consumed:";
	cin >> unit;
	if(unit>=0){
	cout << "Customer Id: " << id << endl;
	cout << "custumer name: " << name << endl;
	cout << "Unit consumed:" << unit << endl;
	}
	float charge;
	float sur = 0;
	if (unit >= 0 && unit <= 199)
	{
		charge = unit * 16.20;
		cout << "Amount Charges @Rs 16.20 per unit:";
		cout << charge << endl;
		float total = charge + sur;
		cout << "Surcharge:" << sur << endl;
		cout << "Net Amount Paid by the Customer:" << total << endl;
	}
	else if (unit >= 200 && unit < 300)
	{
		charge = unit * 20.10;
		cout << "Amount Charges @Rs 20.10 per unit:";
		cout << charge << endl;
		float total = charge + sur;
		cout << "Surcharge:" << sur << endl;
		cout << "Net Amount Paid by the Customer:" << total << endl;
	}
	else if (unit >= 300 && unit < 500)
	{
		charge = unit * 27.10;
		cout << "Amount Charges @Rs 27.10 per unit:";
		cout << charge << endl;
		float total = charge + sur;
		cout << "Surcharge:" << sur << endl;
		cout << "Net Amount Paid by the Customer:" << total << endl;
	}
	else if (unit >= 500)
	{
		charge = unit * 35.90;
		cout << "Amount Charges @Rs 35.90 per unit:";
		cout << charge << endl;
		if (charge > 18000)
		{
			sur = charge * 0.15;
		}
		float total = charge + sur;
		cout << "Surcharge:" << sur << endl;
		cout << "Net Amount Paid by the Customer:" << total << endl;
	}
	else
	{
		cout << "invalid input";
	}
}