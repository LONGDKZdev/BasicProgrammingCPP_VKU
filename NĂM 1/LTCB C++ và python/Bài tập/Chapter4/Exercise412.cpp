#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << "A" << endl;  // Alphabet
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "D" << endl;  // Digit
    }
    else {
        cout << "S" << endl;  // Special character
    }

}
