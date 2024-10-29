#include <iostream>
using namespace std;

int main(){
    int n, max;
    
    int max = n;
    cout << "largest odd divisor from 1 to " << n << " is : ";
    for (int i = 1; i <= n; i += 2) { 
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}