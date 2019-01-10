// Robert M Wood Jr.
// CPW 218
// 01/10/19
// Inclass Exercise 1/10/19

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
void printEqual(int one, int two, int three);
string season(int month, int day);

// Main function
int main() {
	int variable1 = 0;
	int variable2 = 0;
	int variable3 = 0;
	cout << "What is the first number? ";
	cin >> variable1;
	cout << endl;

	cout << "What is the second number? ";
	cin >> variable2;
	cout << endl;

	cout << "What is the third number? ";
	cin >> variable3;
	cout << endl;

	printEqual(variable1, variable2, variable3);
	cout << endl;
	cout << endl;
	int month = 0;
	int day = 0;
	cout << "What is month? ";
	cin >> month;
	cout << endl;

	cout << "What is day? ";
	cin >> day;
	cout << endl;

	string when = season(month, day);
	cout << when << endl;

	system("pause");
}

// Exercise #1.
//1. Write a function named printEqual with 3 parameters of type int.
//The method should not return anything(void).
//If any parameter is less than 0, print text "Invalid Value".
//If all parameters are equal, print text "All numbers are equal".
//If all parameters have different values, print text "All numbers are different".
//Otherwise, print "Neither all are equal nor different".

void printEqual(int one, int two, int three) {
	int zero = 0;

	if (one < zero || two < zero || three < zero) {
		cout << "Invalid Value" << endl;
	}
	else if (one == two && two == three) {
		cout << "All numbers are equal" << endl;
	}
	else if(one != two && one != three && two != three) {
		cout << "All numbers are different" << endl;
	}
	else {
		cout << "Neither all are equal nor different" << endl;
	}
	
}


// Exercise #2.
//2. Write a method named season that takes two integers as parameters 
//representing a month and day and that returns a string indicating the 
//season for that month and day.Assume that months are specified as an 
//integer between 1 and 12 (1 for January, 2 for February, and so on)
//and that the day of the month is a number between 1 and 31.
//
//If the date falls between 12 / 16 and 3 / 15, you should return 
//"Winter".If the date falls between 3 / 16 and 6 / 15, you should 
//return "Spring".If the date falls between 6 / 16 and 9 / 15, you
//should return "Summer".And if the date falls between 9 / 16 and 
//12 / 15, you should return "Fall".

string season(int month, int day) {
	string when = "";
	
	if ((month >= 12 && day >= 16) || (month <= 3 && day <= 15)) {
		when = "Winter";
	}
	else if ((month >= 3 && day >= 16) && (month <= 6 && day <= 15)) {
		when = "Spring";
	}
	else if ((month >= 6 && day >= 16) || (month <= 9 && day <= 15)) {
		when = "Summer";
	}
	else {
		when = "Fall";
	}
	return when;
}

