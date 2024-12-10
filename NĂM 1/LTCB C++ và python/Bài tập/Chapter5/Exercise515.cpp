#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter limit :";
    cin>>n;
    int max = 1;
    if(n <= 0){
        cout<<"N";
    }
    else{
    cout << "largest odd divisor from 1 to " << n << " is : ";
    for (int i = 1; i <= n; i += 2) {
        if (n % i == 0) {
        max = i;
        }
    }
    cout << max;
    }
    
}