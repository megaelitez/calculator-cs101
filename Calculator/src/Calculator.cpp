/* Rishabh Bhatnagar 2018 - four function, two value calculator */

#include <iostream>
#include <string>

using namespace std;

double x;
double y;
double finalresult;
string operation;


void valueReturn(void) {
	cout << "The answer is " << finalresult << "." <<endl;
}

double addition(double a, double b) {
	double result = a + b;
		return result;
}

double subtraction(double a, double b) {
	double result = a - b;
		return result;
}

double multiplication(double a, double b) {
	double result = a * b;
		return result;
}

double division(double a, double b) {
	double result = a / b;
		return result;
}

int main(void) {
	cout << "Please enter the first number." <<endl;
	cin >> x;
	cout << "Please enter the second number." <<endl;
	cin >> y;
	cout << "What operation do you want?" <<endl;
	cin >> operation;

	if (operation == "addition"||"+"||"plus") {
	finalresult = addition(x, y);
	valueReturn();
	}

	else if (operation == ("subtraction")||("-")||("minus")) {
	finalresult = subtraction(x, y);
	valueReturn();
	}

	else if (operation == ("multiplication")||("x")||("*")) {
	finalresult = multiplication(x, y);
	valueReturn();
	}

	else if (operation == "division"||"/") {
	finalresult = division(x, y);
	valueReturn();
	}
	else {
	cout << "Invalid operation." <<endl;
	}
return 0;
}


