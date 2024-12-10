#include <bits/stdc++.h>
using namespace std;
int main()
{
//***************************//
//Number of days in the month//
//***************************//
    long year;
    cout<< "Enter the year :";
    cin >> year;
    int month;
    cout << "Enter the month :";
    cin >> month;
    cout<<setfill('*')<<setw(20)<<"*"<<setfill(' ')<<endl;
if(((year%4==0) && (year%100!=0))||(year%400==0)){
    cout << year <<" Is leap year"<<endl;
}
else{
    cout << year << " Is not leap year"<<endl;
}
    cout<<setfill('*')<<setw(20)<<"*"<<setfill(' ')<<endl;
switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    cout << "Number of days in the month is 31 days"<<endl;
    break;

    case 4:
    case 6:
    case 9:
    case 11:
    cout << "Number of days in the month is 30 days"<<endl;
    break;

    case 2:
    {
    if(((year%4==0) && (year%100!=0))||(year%400==0))
        cout << "Number of days in the month is 29 days"<<endl;
    else
        cout << "Number of days in the month is 28 days"<<endl;
    }
    break;

    default:
    cout << "ERROR!,cann't caculate!"<<endl;
    break;
    }

}

