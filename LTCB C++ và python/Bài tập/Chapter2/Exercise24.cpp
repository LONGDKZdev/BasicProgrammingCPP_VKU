#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter value a = ";
    cin>>a;
    cout<<"value a = ";
    cout<<"Enter value b = ";
    cin>>b;
    cout<<"value b = ";

    cout<<"value before change = "<<" value a = "<<a<<" value b = "<<b<<"\n";

    int c =a;
    a=b;
    b=c;

    cout<<"value after change = "<<" value a = "<<a<<" value b = "<<b<<"\n";
}