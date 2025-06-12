#include <iostream>
using namespace std;

string convertToRoman(int num) {
   struct Roman {
      int value;
      string numeral;
   };
   
   Roman romanNumerals[] = {
      {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
      {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
      {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"},
      {1, "I"}
   };
   
   string roman = "";
      for (const auto& rn : romanNumerals) {
         while (num >= rn.value) {
            roman += rn.numeral;
            num -= rn.value;
      }
   }
   return roman;
}

int main() {
   int num;
   cout << "Enter the number: ";
   cin >> num;
   
   if (num <= 0 || num > 3999) {
      cout << "Invalid input! Enter a number between 1 and 3999.\n";
   } else {
      cout << "Roman numeral: " << convertToRoman(num) << endl;
   }
   return 0;
}
