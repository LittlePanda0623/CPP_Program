//************************************************************** 
//Program Name: FileIOProgram.cpp
//Describtion: Input the variables from a file. Do sum and average of all the variable and extract results to result.txt
//************************************************************** 

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	//Input the file 
	ifstream inData;
	int int1, int2, int3, int4, int5,int6,sum;
	double avg; 

	inData.open("numbers.txt");
	inData >> int1 >> int2 >> int3 >> int4 >> int5>> int6;

	//calculation
	sum = int1 + int2 + int3 + int4 + int5 + int6;
	avg = double(sum/ double(6));

	inData.close();

	//output
	ofstream outData;

	outData.open("result.txt");
	outData << "The six numbers :" << setw(5) << int1 << setw(5) << int2 << setw(5) << int3 << setw(5) << int4 << setw(5) << int5 << setw(5) << int6 << '\n'<<
			"Sum of six numbers :"<<setw(5)<<sum<<'\n'<<
			'\n'<<
			"The average of six numbers :"<<fixed<<setprecision(2)<<avg<<endl;
	outData.close();

	return 0;
}


