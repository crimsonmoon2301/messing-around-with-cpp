// daushdasuda.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "teto.h"


int main()
{
    std::cout << "Hello World!\n";
    std::cout << "teto supremacy\n";
    std::cout << "\n";
    int dig1 = 29;
    int dig2 = 30;
    int sum = dig1 + dig2;

    std::cout << "The sum of " << dig1 << " and " << dig2 << " is " << sum << "\n";


    std::cout << "\nsome other bs here\n";
    std::cout << "-------------------\n";
    std::cout << "size of int " << sizeof(int) << " bytes\n";
    std::cout << "size of double " << sizeof(double) << " bytes\n";
    std::cout << "size of char " << sizeof(char) << " bytes\n";
    std::cout << "size of bool " << sizeof(bool) << " bytes\n";


    std::cout << "\nMax limit of int: " << INT_MAX << " bytes\n";
    std::cout << "\nMin limit of int: " << INT_MIN << " bytes\n";
    std::cout << "\nMax limit of unsigned int: " << UINT_FAST16_MAX << " bytes\n";
    std::cout << "\nMax limit of long long data type: " << LLONG_MAX << " bytes\n";
    std::cout << "\nMin limit of long long data type: " << LLONG_MIN << " bytes\n";
    std::cout << "\nMax limit of unsigned long long data type: " << ULLONG_MAX << " bytes\n";
    std::cout << "\nThe Bits contain in char data type: " << CHAR_BIT;
    std::cout << "\nThe max limit of char: " << CHAR_MAX;
    std::cout << "\nThe min limit of char: " << CHAR_MIN;
    std::cout << "\nSigned char: " << SCHAR_MAX;
    std::cout << "\nSigned minimum char: " << SCHAR_MIN;
    std::cout << "\nUnsigned char type: " << UCHAR_MAX;
    std::cout << "\nMinimum limit of short: " << SHRT_MIN;
    std::cout << "\nMax limit of short: " << SHRT_MAX;
    std::cout << "\nUnsigned short max: " << USHRT_MAX << "\n";

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


    std::cout << "---------------------";
    std::cout << "\nGender: " << gender;
    std::cout << "\nMarried?: " << married;
    std::cout << "\nNumber of sons: " << soncount;
    std::cout << "\nYear of appointment: " << year;
    std::cout << "\nSalary for a year: " << sal;
    std::cout << "\nHeight is: " << height;
    std::cout << "\nGPA: " << gpa;
    std::cout << "\nSalary drawn: " << salarydrawn;
    std::cout << "\nBalance till: " << bal << "\n";

    int five = 5;
    int seven = 7;
    double dub1 = 3.7;
    double eight = 8.0;

    std::cout << "---------------------\n";
    std::cout << five << "+" << seven << "=" << five + seven << "\n";
    std::cout << dub1 << "+" << eight << "=" << dub1 + eight << "\n";
    std::cout << five << "+" << eight << "=" << five + eight << "\n";
    std::cout << five << "-" << seven << "=" << five - seven << "\n";
    std::cout << dub1 << "-" << eight << "=" << dub1 - eight << "\n";
    std::cout << five << "-" << eight << "=" << five - eight << "\n";
    std::cout << five << "*" << seven << "=" << five * seven << "\n";
    std::cout << dub1 << "*" << eight << "=" << dub1 * eight << "\n";
    std::cout << five << "*" << eight << "=" << five * eight << "\n";
    std::cout << five << "/" << seven << "=" << five / seven << "\n";
    std::cout << dub1 << "/" << seven << "=" << dub1 / seven << "\n";
    std::cout << five << "/" << eight << "=" << five / eight << "\n";

    teto();
};