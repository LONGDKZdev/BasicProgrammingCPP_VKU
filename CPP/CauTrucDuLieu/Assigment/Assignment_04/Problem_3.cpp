#include <iostream>
#include <stack>

using namespace std;

string reverseWithStack(string str) {
    stack<char> s;
    for (char ch : str) s.push(ch);
    
    string reversed = "";
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }
    
    return reversed;
}

string reverseWithRecursion(string str) {
    if (str.empty()) return "";
    return str.back() + reverseWithRecursion(str.substr(0, str.size() - 1));
}

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;
    
    cout << "Reversed with stack: " << reverseWithStack(str) << endl;
    cout << "Reversed with recursion: " << reverseWithRecursion(str) << endl;
    
    return 0;
}
