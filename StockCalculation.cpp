//********************************************************************************************
//Program name: Stock Calculation 
// Description: Read the stock name, the number of share sold, the purchase price of
// each share, and the selling price of each share. The program
// outputs the stock name, the amount invested, the total service charge,
// amount gained or lost, and the amount received after selling the stock.
//********************************************************************************************

#include <iostream>
using namespace std;

int main()
{
	//declare variable
	const float SERVICECHARGE = 0.015;

	string stockName;
	int numberOfShares;
	double buyingPrice, sellingPrice, initialTotalForBuy, initialTotalForSell, Buy_serviceFee, Sell_serviceFee;
	double totalInvested, totalReceived, totalServiceFee, amountGOL; //output variable

	
	//user input stockName, buyingPrice, sellingPrice, and numberOfShares
	cout << "Enter the stock name: ";
	cin >> stockName;
	cout << "\nEnter the buying price of each share (2 Decimal Place Acceptable): ";
	cin >> buyingPrice;
	cout << "\nEnter the selling price of each share (2 Decimal Place Acceptable): ";
	cin >> sellingPrice;
	cout << "\nEnter the number of shares sould: ";
	cin >> numberOfShares;

	//calculation
	//buy   ,totalInvested will display
	initialTotalForBuy = buyingPrice * numberOfShares;
	Buy_serviceFee = initialTotalForBuy * SERVICECHARGE;
	totalInvested = initialTotalForBuy + Buy_serviceFee;

	//sell  ,totalReceived will display
	initialTotalForSell = sellingPrice * numberOfShares;
	Sell_serviceFee = initialTotalForSell * SERVICECHARGE;
	totalReceived = initialTotalForSell - Sell_serviceFee;


	//service fee
	totalServiceFee = Buy_serviceFee + Sell_serviceFee;

	//amount gain or loss
	amountGOL = totalReceived - totalInvested;


	//output calculation
	cout << "Stock Name : " <<stockName<< endl;
	cout << "Total amount invested in : $" <<totalInvested<<endl;
	cout << "Total amount received: $" << totalReceived << endl;
	cout << "Total service charges: $" << totalServiceFee << endl;
	cout << "amount gained or lost: $" <<amountGOL<<endl;
	
	return 0;
}