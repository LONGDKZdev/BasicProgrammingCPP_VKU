#include <bits/stdc++.h>

using namespace std;

int main() {
    int R;
    double tienthuong = 0.0;
    cin >> R;
    if (R < 0 || R > 500) {
        cout << "N";
    }
    else{
        if (R > 400) {
        tienthuong += (R - 400) * 0.25;
        R = 400;
    }
    if (R > 200 && R <= 400) {
        tienthuong += (R - 200) * 0.20;
        R = 200;
    }
    if (R > 100 && R <= 200) {
        tienthuong += (R - 100) * 0.15;
        R = 100;
    }
    if (R > 50 && R <= 100) {
        tienthuong += (R - 50) * 0.10;
        R = 50;
    }
    if (R <= 50) {
        tienthuong += R * 0.05;
    }
    cout << fixed << setprecision(2) << tienthuong << endl;
    }
    
}
