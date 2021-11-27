#include <iostream>
#include <vector>
#include "header.h"

using namespace std;


double number(vector<string> numberStrings)
{
    const double x = numberStrings.size();
    double val = x;

    if(cin>>val)
        return val;

    cin.clear();

    string numString;
    cin >> numString;

    for(int i = 0; i < numberStrings.size(); i++)
    {
        if (numberStrings[i] == numString)
        val = i;
    }
    

    return val;
}

void calculation(double n1, double n2, char operand)
{
    switch (operand) {
        case '+':
            cout << "The sum of " << n1 << " and " << n2 << " is " << n1 + n2;
            break;
        
        case '-':
            cout << "The difference of " << n1 << " and " << n2 << " is " << n1 - n2;
            break;

        case '*':
            cout << "The product of " << n1 << " and " << n2 << " is " << n1 * n2;
            break;

        case '/':
            cout << "The quotient of " << n1 << " and " << n2 << " is " << n1 / n2;
            break;

        default:
            cout << "Invalid Operand\n";
            break;
    }
}



