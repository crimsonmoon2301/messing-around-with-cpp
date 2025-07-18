#include <iostream>


// let the increment jank begin, i wonder if i can get a for loop here
int teto() {

	int startnum = 57;

	int count = 3;

	std::cout << "---------------------\n";
	std::cout << "Beginning number: " << startnum << "\n";

	for (int i = 0; i < count; i++)
	{
		std::cout << "Incrementing number by "<<i <<"=" << startnum << "\n";
		startnum++;
	}
	std::cout << "Final number: " << startnum << "\n";
	std::cout << "---------------------\n";
	std::cout << "Number after incrementing: " << startnum << "\n";
	for (int i = 0; i < count; i++)
	{
		std::cout << "Deincrementing number by " << i << "=" << startnum << "\n";
		startnum--;
	}
	std::cout << "Final number after deincrementing: " << startnum << "\n";
	return 0;
}