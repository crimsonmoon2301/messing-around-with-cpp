#include <iostream>

int numswap() {
	using namespace std;

	int num1, num2;

	int temp;

	cout << "---------------------\n";
	cout << "Swapping numbers\n";

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	temp = num2;
	num2 = num1;
	num1 = temp;
	cout << "Swapped numbers: " << num1 << " and " << num2 << "\n";
	return 0;
}