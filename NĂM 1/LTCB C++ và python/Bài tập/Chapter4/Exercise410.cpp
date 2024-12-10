# include <bits/stdc++.h>
using namespace std;

int main(){
    long value1, value2, value3;
    cout<<"Enter value1 = ";
    cin>>value1;
    cout<<endl;
    cout<<"Enter value2 = ";
    cin>>value2;
    cout<<endl;
    cout<<"Enter value3 = ";
    cin>>value3;
    cout<<endl;
    if((value1 > (int)pow(-10,9) && value2 > (int)pow(-10,9) && value3 > (int)pow(-10,9)) && (value1 < (int)pow(10,9) && value2 < (int)pow(10,9) && value3 < (int)pow(10,9))){
    if (value1 > value2) swap(value1,                            value2);
    if (value1 > value3) swap(value1, value3);
    if (value2 > value3) swap(value2, value3);
    cout<<endl;
    cout<<" "<<value1<<" "<<value2<<" "<<value3;
    }
    else
    cout<<"Not valid";
                             
    }
