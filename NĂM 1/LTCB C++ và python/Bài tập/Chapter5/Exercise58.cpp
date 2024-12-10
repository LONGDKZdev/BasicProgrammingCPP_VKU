#include <iostream>
using namespace std;

int main() {
    int n, product = 1;
    cout << "Enter the naturel number  n: ";
    cin >> n;
    product = 1;
    if (n == 0) {
        product = 0;
    } 
    else {
        while(n>0){
        int lastValue= n % 10;
        product = product * lastValue;
        n/=10;
        }
    }
    cout<<"Result = "<<product;
}