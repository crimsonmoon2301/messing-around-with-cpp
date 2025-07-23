// daushdasuda.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "teto.h"
#include "buinagolova.h"
#include "numswap.h"
#include "area.h"

using namespace std;

int main()
{
    cout << "Hello World!\n";
    cout << "teto supremacy\n";
    cout << "\n";
    int dig1 = 29;
    int dig2 = 30;
    int sum = dig1 + dig2;

    cout << "The sum of " << dig1 << " and " << dig2 << " is " << sum << "\n";


    cout << "\nsome other bs here\n";
    cout << "-------------------\n";
    cout << "size of int " << sizeof(int) << " bytes\n";
    cout << "size of double " << sizeof(double) << " bytes\n";
    cout << "size of char " << sizeof(char) << " bytes\n";
    cout << "size of bool " << sizeof(bool) << " bytes\n";


    cout << "\nMax limit of int: " << INT_MAX << " bytes\n";
    cout << "\nMin limit of int: " << INT_MIN << " bytes\n";
    cout << "\nMax limit of unsigned int: " << UINT_FAST16_MAX << " bytes\n";
    cout << "\nMax limit of long long data type: " << LLONG_MAX << " bytes\n";
    cout << "\nMin limit of long long data type: " << LLONG_MIN << " bytes\n";
    cout << "\nMax limit of unsigned long long data type: " << ULLONG_MAX << " bytes\n";
    cout << "\nThe Bits contain in char data type: " << CHAR_BIT;
    cout << "\nThe max limit of char: " << CHAR_MAX;
    cout << "\nThe min limit of char: " << CHAR_MIN;
    cout << "\nSigned char: " << SCHAR_MAX;
    cout << "\nSigned minimum char: " << SCHAR_MIN;
    cout << "\nUnsigned char type: " << UCHAR_MAX;
    cout << "\nMinimum limit of short: " << SHRT_MIN;
    cout << "\nMax limit of short: " << SHRT_MAX;
    cout << "\nUnsigned short max: " << USHRT_MAX << "\n";

    // part 2 of ts

    char gender = 'F';
    bool married = true;
    int soncount = 2;
    int year = 2009;
    int sal = 1500000;
    double height = 79.48;
    double gpa = 4.69;
    int salarydrawn = 12047235;
    int bal = 995324987;


    cout << "---------------------";
    cout << "\nGender: " << gender;
    cout << "\nMarried?: " << married;
    cout << "\nNumber of sons: " << soncount;
    cout << "\nYear of appointment: " << year;
    cout << "\nSalary for a year: " << sal;
    cout << "\nHeight is: " << height;
    cout << "\nGPA: " << gpa;
    cout << "\nSalary drawn: " << salarydrawn;
    cout << "\nBalance till: " << bal << "\n";

    int five = 5;
    int seven = 7;
    double dub1 = 3.7;
    double eight = 8.0;

    cout << "---------------------\n";
    cout << five << "+" << seven << "=" << five + seven << "\n";
    cout << dub1 << "+" << eight << "=" << dub1 + eight << "\n";
    cout << five << "+" << eight << "=" << five + eight << "\n";
    cout << five << "-" << seven << "=" << five - seven << "\n";
    cout << dub1 << "-" << eight << "=" << dub1 - eight << "\n";
    cout << five << "-" << eight << "=" << five - eight << "\n";
    cout << five << "*" << seven << "=" << five * seven << "\n";
    cout << dub1 << "*" << eight << "=" << dub1 * eight << "\n";
    cout << five << "*" << eight << "=" << five * eight << "\n";
    cout << five << "/" << seven << "=" << five / seven << "\n";
    cout << dub1 << "/" << seven << "=" << dub1 / seven << "\n";
    cout << five << "/" << eight << "=" << five / eight << "\n";

    teto();
    yabyk();
    numswap();
    area();
};