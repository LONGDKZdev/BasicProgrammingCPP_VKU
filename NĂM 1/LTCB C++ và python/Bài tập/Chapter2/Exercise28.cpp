#include <iostream>
using namespace std;
int main(){

    int x, year, month, day;
    cout << "Enter the number of days: ";
    cin >> x;

year = x/365;
month= (x%365)/30;
day = (x%365)%30;
cout << "Expected output" << endl; cout << "Number of year: " << year << endl;
cout << "number of month: " << month << endl;
cout << "Number of day: " << day << endl;
return 0;
}