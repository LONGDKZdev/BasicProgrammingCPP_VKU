#include <iostream>
using namespace std;
int main()
{
    int hours, minutes;
    cout<<"Enter hours = ";
    cin>>hours;
    cout<<"Enter minutes = ";
    cin>>minutes;
    int valuechange = hours * 60;
    cout<<endl;
    cout<<" sum minute  = "<<(valuechange + minutes);
    cout<<endl;
}