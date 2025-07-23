#include <iostream>

using namespace std;

int area() {
	int length, width;

	cout << "---------------------\n";
	cout << "Input the length of rectangle: ";
	cin >> length;
	cout << "Input the width of rectangle: ";
	cin >> width;

	cout << "The area of rectangle: " << (length * 2);
	cout << "\nThe perimeter of rectangle: " << (2 * (length + width)) << "\n";


	return 0;
}