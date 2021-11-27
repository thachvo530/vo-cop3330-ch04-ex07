#include <iostream>
#include <vector>
#include "header.h"

using namespace std;

vector <string> numberStrings;

int main(void)
{
    numberStrings.push_back("zero");
	numberStrings.push_back("one");
	numberStrings.push_back("two");
	numberStrings.push_back("three");
	numberStrings.push_back("four");
	numberStrings.push_back("five");
	numberStrings.push_back("six");
	numberStrings.push_back("seven");
	numberStrings.push_back("eight");
	numberStrings.push_back("nine");

    double n1;
    double n2;
    char operand;

    cout << "Enter two digits or digit names (0-9). Seperate with operation (+,-,*,/).\n";
    n1 = number(numberStrings);

    cin >> operand;

    n2 = number(numberStrings);

    calculation(n1,n2, operand);

}