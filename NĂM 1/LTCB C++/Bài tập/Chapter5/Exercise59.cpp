# include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    int result = 0;
    int number =0;
    cout<<"Enter (m) Min value : ";
    cin>>m;
    cout<<"Enter (n) Max value : ";
    cin>>n;

    for (int i = m; i <= n; i++) {
        int number = i;
        int sumOfCubes = 0;

        while (number > 0) {
            int digit = number % 10;
            sumOfCubes += digit * digit * digit;
            number /= 10;
        }

        if (sumOfCubes == i) {
            cout << i << " ";
        }
    }
    cout << endl;


}