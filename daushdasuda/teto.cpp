#include <iostream>


// let the increment jank begin, i wonder if i can get a for loop here
int teto() {

	int startnum = 57;

	int count = 3;

	for (int i = 0; i < count; i++)
	{
		std::cout << "Incrementing number by "<<i <<"=" << startnum << "\n";
		startnum++;
	}

	return 0;
}