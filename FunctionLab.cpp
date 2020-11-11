//************************************************************
//Program name: FunctionLab
//Describe: using different classes to separation the function to improve the code reading.
//************************************************************

#include <iostream>

using namespace std;

void menu();
float Add(float, float);
float Subtract(float, float);
void Multiply(float&, float&);
void Divide(float&, float&);

char UserInput;
float Num1 =0.0, Num2=0.0, Ans = 0.0;

int main()
{
	do {
		menu();
		switch (UserInput) {
		case 'A':
			cout << "Please enter two decimal numbers: " << endl;
			cin >> Num1 >> Num2;
			Add(Num1, Num2);
			cout << Num1 << " + " << Num2 << " = " << Ans << "\n" << endl;
			break;

		case 'B':
			cout << "Please enter two decimal numbers: " << endl;
			cin >> Num1 >> Num2;
			Subtract(Num1, Num2);
			cout << Num1 << " - " << Num2 << " = " << Ans << "\n" << endl;
			break;

		case 'C':
			cout << "Please enter two decimal numbers: " << endl;
			cin >> Num1 >> Num2;
			Multiply(Num1, Num2);
			break;

		case 'D':
			cout << "Please enter two decimal numbers: " << endl;
			cin >> Num1 >> Num2;
			Divide(Num1, Num2);
			break;

		case 'Q':
			break;

		default:
			cout << "\n" << "Choice must be 'A', 'B', 'C', 'D',or 'Q'" << endl;
			break;
		}//switch end
	} while (UserInput != 'Q');
		cout << "Thank you for using this app! Good Bye." << endl;
	return 0;
}

void menu() {
	cout << "A: Add two numbers" << "\n"
		<< "B: Subtract two numbers" << "\n"
		<< "C: Multiple two numbers" << "\n"
		<< "D: Divide two numbers" << "\n"
		<< "Q: Quit the program" << "\n"<<"\n"
		<< "Please enter your selection: ";
	cin>>UserInput;
	UserInput = toupper(UserInput);//Convert every user input to upper case
}//void menu end

float Add(float a, float b) {
	Ans = a + b;
	return Ans;
}//float add end

float Subtract(float a, float b) {
	Ans = a - b;
	return Ans;
}//float sub end

void Multiply (float& a, float& b) {
	Ans = a * b;
	cout << a << " * " << b << " = " << Ans << "\n" << endl;
}//void mut end

void Divide(float& a, float& b) {
	Ans = a / b;
	cout << a << " / " << b << " = " << Ans << "\n" << endl;
}//void div end
