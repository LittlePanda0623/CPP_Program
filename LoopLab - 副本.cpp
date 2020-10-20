//*************************************************************************************
//Program name: LoopLab.cpp
//Description: Using do...while loop to make a loop function. End when user want to quit.
//*************************************************************************************

#include <iostream>

using namespace std;

int main()
{
	float Num1 = 0.0, Num2 = 0.0, Ans = 0.0;
	char UserInput;
	do {
		cout << "Select funtion you want to continue: " << "\n"
			<< "A: Add two numbers" << "\n"
			<< "B: Subtract two numbers" << "\n"
			<< "C: Multiple two numbers" << "\n"
			<< "D: Divide two numbers" << "\n"
			<< "Q: Quit the program" << endl;
		cin >> UserInput;


		UserInput = toupper(UserInput);//Convert every user input to upper case

		//link to menu
		switch (UserInput) {
		case 'A':
			cout << "Please input two numbers" << endl;
			cin >> Num1 >> Num2;
			Ans = Num1 + Num2;
			cout << Num1 << "+" << Num2 << "=" << Ans << "\n" <<endl;
			break;

		case 'B':
			cout << "Please input two numbers" << endl;
			cin >> Num1 >> Num2;
			Ans = Num1 - Num2;
			cout << Num1 << "-" << Num2 << "=" << Ans << "\n" << endl;
			break;

		case 'C':
			cout << "Please input two numbers" << endl;
			cin >> Num1 >> Num2;
			Ans = Num1 * Num2;
			cout << Num1 << "*" << Num2 << "=" << Ans << "\n" << endl;
			break;

		case 'D':
			cout << "Please input two numbers" << endl;
			cin >> Num1 >> Num2;
			Ans = Num1 / Num2;
			cout << Num1<<"/"<<Num2<<"="<< Ans << "\n" << endl;
			break;

		case 'Q':
			break;

		default:
			cout << "You have a wrong selection, please try again"<<endl;
			break;
		}//switch end

	} while (UserInput != 'Q');//while user input is not "Q" then keep looping.
		cout << "Thank you for using program! Good Bye." << endl;
		system("pause");
}


