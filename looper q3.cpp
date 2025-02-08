
#include <iostream>
using namespace std;

int main() {
    int number, firstDigit, lastDigit;

    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        number = -number; 
    }
    lastDigit = number % 10;

    while (number >= 10) {
        number /= 10; 
    }
    firstDigit = number;

    int sum = firstDigit + lastDigit;

    cout << "Sum of the first and last digit: " << sum << endl;

    return 0;
}

