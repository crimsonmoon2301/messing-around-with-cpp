#include <iostream>
using namespace std;

// let the increment jank begin, i wonder if i can get a for loop here
int teto() {

	int startnum = 57;

	int count = 3;

	cout << "---------------------\n";
	cout << "Beginning number: " << startnum << "\n";

	for (int i = 0; i < count; i++)
	{
		cout << "Incrementing number by "<<i <<"=" << startnum << "\n";
		startnum++;
	}
	cout << "Final number: " << startnum << "\n";
	cout << "---------------------\n";
	cout << "Number after incrementing: " << startnum << "\n";
	for (int i = 0; i < count; i++)
	{
	    cout << "Deincrementing number by " << i << "=" << startnum << "\n";
		startnum--;
	}
	cout << "Final number after deincrementing: " << startnum << "\n";
	return 0;
}