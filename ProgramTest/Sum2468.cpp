#include <bits/stdc++.h>
using namespace std;

int main (){
    int valueIn;
    cout<<"Enter value : ";
    cin>>valueIn;
    int i = 1;
    int sum = 0;
    while(i <= valueIn )
    {
        if(i % 2 == 0)
        {
            sum +=i;
        }
        i++;
    }
    cout<<"Sum = "<<sum;
}