#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter value to test : ";cin>>n;

    int number = n;
    int digit, valueOut = 0;

    while (number > 0){
    digit = number % 10;
    number /= 10;
    valueOut = valueOut * 10 + digit; 
    }

    if(valueOut == n){
        cout<<"That is Palindrome number ";
        }
    else{
        cout<<"That isn't Palindrome number ";
        }
    
    cout << endl;
    }
