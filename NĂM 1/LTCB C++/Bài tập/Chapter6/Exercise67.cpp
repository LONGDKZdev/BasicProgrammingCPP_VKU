#include <iostream>
using namespace std;

int candyParcel(int nSmall, int nBig, int goal) {
    int maxBig = goal / 5;
    maxBig = min(maxBig, nBig);
    goal -= maxBig * 5;
    if (goal <= nSmall * 2 && goal % 2 == 0) return goal / 2;
    return -1;
}

int main() {
    int nSmall, nBig, goal;
    cin >> nSmall >> nBig >> goal;
    cout << candyParcel(nSmall, nBig, goal) << endl;
    return 0;
}
