#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num > 0) {
        int lastDigit = num % 10;
        sum += lastDigit;
        num /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}