#include <bits/stdc++.h>
using namespace std;

int main (){
    int day, month,year;
    
    cout<<"Enter day from 1 to 31 = ";cin>>day;
    while(day < 1 || day > 31 ){
        cout<<"Enter day again = ";
        cin>>day;
    }
    cout<<"Enter month from 1 to 12 = ";cin>>month;
    while(month < 1 || month > 12 ){
        cout<<"Enter month again = ";
        cin>>month;
    }
    cout<<"Enter 2 digit number in year = ";cin>>year;
    while(year < 10 || year > 99 ){
        cout<<"Enter 2 digit number in year again =  ";
        cin>>year;
    }
    int value = day * month;
    cout<<"(day/month/year) : "<<"("<<day<<"/"<<month<<"/"<<year<<")"<<endl;

    if(value == year)
        cout<<"the date is magic "<<endl;
    else
    cout<<"the date isn't magic "<<endl;

}