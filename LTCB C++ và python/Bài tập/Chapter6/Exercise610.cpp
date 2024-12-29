#include <iostream>
#include <string>
using namespace std;

bool isPolydivisible(int n) {
    string num = to_string(n);
    for (int i = 1; i <= num.size(); i++) {
        int subNum = stoi(num.substr(0, i));
        if (subNum % i != 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (isPolydivisible(n)) {
        cout << n << " is a Polydivisible number.\n";
    } else {
        cout << n << " is not a Polydivisible number.\n";
    }
    return 0;
}
