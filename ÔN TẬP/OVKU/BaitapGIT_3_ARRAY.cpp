#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int n;
   int arrayA[10][10];
   cin >> n;

   if (n <= 0 || n > 10) {
      cout << "N" << endl;
      return 0;
   }

    // Nhập ma trận
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
            cin >> arrayA[i][j];
      }
   }

    int largestPrime = -1; // Giả sử không có số nguyên tố

    // Duyệt qua các phần tử của ma trận
   for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j += 2) { // Chỉ duyệt các cột chỉ số chẵn
            int value = arrayA[i][j];
            bool isPrime = true;

            // Kiểm tra số nguyên tố
            if (value <= 1) {
               isPrime = false;
            } else {
               for (int k = 2; k <= sqrt(value); k++) {
                  if (value % k == 0) {
                        isPrime = false;
                        break;
                  }
               }
            }

            // Cập nhật số nguyên tố lớn nhất
            if (isPrime && value > largestPrime) {
               largestPrime = value;
            }
      }
   }

    // In kết quả
   if (largestPrime == -1) {
      cout << "N" << endl;
   } else {
      cout << largestPrime << endl;
   }
   return 0;
}
