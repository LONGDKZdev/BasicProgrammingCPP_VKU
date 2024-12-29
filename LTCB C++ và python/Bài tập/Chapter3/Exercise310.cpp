#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int two_digit_number;//số có 2 chữ số 
    cout<<"Enter number from 10 ----> 99 : ";
    cin>>two_digit_number;

    while(two_digit_number < 10 || two_digit_number >= 100){
        cout<<"ERROR NUMBER! Enter again!"<<endl;
        cout<<"two_digit_number =";
        cin>>two_digit_number;
    }
    int theFirtNumber = two_digit_number / 10;
    int theSecondNumber = two_digit_number % 10;
    int sum = theFirtNumber + theSecondNumber;

    cout<<"Sum of the two digit number = "<<sum<<endl;
}