#include <iostream>

int yabyk()
{
	int num1;
	int num2;

	std::cout << "Enter the first number: ";
	std::cin >> num1;
	std::cout << "Enter the second number: ";
	std::cin >> num2;
	std::cout << "The sum of " << num1 << " and " << num2 << " is " << (num1 + num2) << "\n";
	return 0;
}