//****************************************************
//Program Name: SwitchLab.cpp 
//description: 
//This program is using switch syntax to calculate and print the bill for a company. 
//Two different plans has two different calculations. This helps people know the total pay.
//****************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//const variable
	const double REGPAY = 10;
	const double PREPAY = 25;
	const double REGOVERTIME = 0.2;
	const double PREDAYOT = 0.1;
	const double PRENIGHTOT = 0.05;

	//local variable 
	string accNum, TypeServ;
	char serviceCode;
	int DayT, NightT, TForServ;
	double TotalCost = 0.0, dayCost = 0.0, nightCost = 0.0;
	//TotalCost, dayCost, and nightCost have to setup a number to them. Othervise, occur warning.



	//asking for account number
	cout << "Please enter your account number: " << endl;
	cin >> accNum;

	//asking for account typerela
	cout << "Please enter your service code: r/R for regular, p/P for premium" << endl;
	cin >> serviceCode;

	//detect account type and do the following calculation
	switch (serviceCode) {
	case 'r':
	case 'R':
		TypeServ = "Regular";
		cout << "Please enter time you used: " << endl;
		cin >> TForServ;
		//************************************************************************************************************
		//Logic
		if (TForServ > 50) {
			TotalCost = ((double(TForServ) - double(50)) * REGOVERTIME);
		}
		TotalCost += REGPAY;
		//************************************************************************************************************
		//Display
		cout << "Account Number: " << accNum << endl;
		cout << "Service Type: " << TypeServ << endl;
		cout << "Minutes Service Used: " << TForServ << endl;
		cout << "Amount Due: " << fixed << setprecision(2) << TotalCost << endl;
		break;
	case 'p':
	case 'P':
		TypeServ = "Premium";
		cout << "Please enter day time (6 a.m.- 6 p.m.) you used: " << endl;
		cin >> DayT;
		cout << "Please enter night time (6 p.m. - 6 a.m.) you used: " << endl;
		cin >> NightT;
		//************************************************************************************************************
		//Logic
		if (double(DayT) > 75) {
			dayCost = ((double(DayT) - double(75)) * PREDAYOT);
		}
		if (double(NightT) > 100) {
			nightCost = ((double(NightT) - double(100)) * PRENIGHTOT);
		}
		TotalCost = PREPAY + dayCost + nightCost;
		//************************************************************************************************************
		//Display
		cout << "Account Number: " << accNum << endl;
		cout << "Service Type: " << TypeServ << endl;
		cout << "Minutes Service Used (Day-time): " << DayT << endl;
		cout << "Minutes Service Used (Night-time): " << NightT << endl;
		cout << "Amount Due: " << fixed << setprecision(2) << TotalCost << endl;
		break;
	default:
		cout << "You are enter an invaild service code" << endl;
		return 1;
		break;
	}
	return 0;
}

