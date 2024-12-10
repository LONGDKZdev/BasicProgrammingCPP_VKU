#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void reorderDigits(int x) {
    string num = to_string(x);

    // Ascending order
    sort(num.begin(), num.end());
    cout << num << endl;

    // Descending order
    sort(num.rbegin(), num.rend());
    cout << num << endl;
}

int main() {
    int x;

    cin >> x;

    reorderDigits(x);
    return 0;
}
