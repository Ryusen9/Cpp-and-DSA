#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    if (x > 0 && x <= 9) {
        if ( x == 1) cout << "one";
        else if (x == 2) cout << "two";
        else if (x == 3) cout << "three";
        else if (x == 4) cout << "four";
        else if (x == 5) cout << "five";
        else if (x == 6) cout << "six";
        else if (x == 7) cout << "seven";
        else if (x == 8) cout << "eight";
        else if (x == 9) cout << "nine";
    } else {
        cout << "Greater than 9" << endl;
    }
}