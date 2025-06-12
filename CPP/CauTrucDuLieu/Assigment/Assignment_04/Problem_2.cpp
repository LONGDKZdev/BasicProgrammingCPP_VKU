#include <iostream>
#include <stack>

using namespace std;

string toBinary(int n) {
    stack<int> s;
    string binary = "";
    
    while (n > 0) {
        s.push(n % 2);
        n /= 2;
    }
    
    while (!s.empty()) {
        binary += to_string(s.top());
        s.pop();
    }
    
    return binary;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Binary: " << toBinary(n) << endl;
    return 0;
}
