#include <bits/stdc++.h>
using namespace std;

void methodA();
void methodB();
void methodC();

void problem1() {
   int choice;
   do {
      cout << "\n=== Problem 1: Compute Average ===\n";
      cout << "1. Using array and computing average\n";
      cout << "2. Separate very small numbers and others\n";
      cout << "3. Using single variable and separate method\n";
      cout << "4. Back to main menu\n";
      cout << "Choose an option: ";
      cin >> choice;
         switch (choice) {
            case 1: methodA(); break;
            case 2: methodB(); break;
            case 3: methodC(); break;
      }
   } while (choice != 4);
}

void methodA() {
   int n;
   cout << "Enter number of elements (n < 1000): ";
   cin >> n;

   double arr[1000], sum = 0;
   int count = 0;

   for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] > 0) {
            sum += arr[i];
            count++;
      }
   }
   
   cout << "Average of positive numbers: " << (count ? sum / count : 0) << endl;
}

void methodB() {
   int n;
   cout << "Enter number of elements (n < 1000): ";
   cin >> n;

   double arr[1000], sumSmall = 0, sumOthers = 0;
   int countSmall = 0, countOthers = 0;

   for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] > 0) {
            if (arr[i] < 0.01) {
               sumSmall += arr[i];
               countSmall++;
            } else {
               sumOthers += arr[i];
               countOthers++;
            }
      }
   }

   cout << "Average of very small numbers: " << (countSmall ? sumSmall / countSmall : 0) << endl;
   cout << "Average of other numbers: " << (countOthers ? sumOthers / countOthers : 0) << endl;
}

void methodC() {
   int n;
   cout << "Enter number of elements (n < 1000): ";
   cin >> n;

   double num, sumSmall = 0, sumOthers = 0;
   int countSmall = 0, countOthers = 0;

   for (int i = 0; i < n; i++) {
      cin >> num;
      if (num > 0) {
         if (num < 0.01) {
               sumSmall += num;
               countSmall++;
            } else {
               sumOthers += num;
               countOthers++;
            }
      }
   }

   cout << "Average of very small numbers: " << (countSmall ? sumSmall / countSmall : 0) << endl;
   cout << "Average of other numbers: " << (countOthers ? sumOthers / countOthers : 0) << endl;
}

int main() {
   problem1();
   return 0;
}