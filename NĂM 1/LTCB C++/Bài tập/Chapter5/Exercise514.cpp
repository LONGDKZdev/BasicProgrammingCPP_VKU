#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    cout << setfill('*') << setw(20) << '*' << setfill(' ') << "" << endl;
    cout << "*" << setw(8) << ' ' << "MENU" << setw(6) << ' ' << "*" << endl;
    cout << "*" << setw(2) << ' ' << "1. Armstrong" << setw(4) << ' ' << "*" << endl;
    cout << "*" << setw(2) << ' ' << "2. Prime" << setw(8) << ' ' << "*" << endl;
    cout << "*" << setw(2) << ' ' << "3. Finish" << setw(7) << ' ' << "*" << endl;
    cout << setfill('*') << setw(20) << '*' << setfill(' ') << "" << endl;

    int Choose;
    cout << "Choose (1,2,3): ";
    cin >> Choose;
    
    if(Choose < 1 || Choose > 3){
        while (Choose < 1 || Choose > 3) {
        cout << "Can't find! Enter again: ";
        cin >> Choose;
        }
    }
    

    switch (Choose) {
        case 1: {
            ////////////////////////
            ////Armstrong number////
            ////////////////////////
            cout << "Calculate Armstrong" << endl;
            int valueIn, number;
            int SUM = 0;
            int limit = 0;
            cout << "Enter number to test: ";
            cin >> valueIn;

            
            number = valueIn;
            while (number > 0) {
                limit++;
                number /= 10;
            }

            number = valueIn;
            while (number > 0) {
                int digit = number % 10;
                SUM += pow(digit, limit);
                number /= 10;
            }

            if (SUM == valueIn) {
                cout << "That number is an Armstrong number." << endl;
            } else {
                cout << "That number is NOT an Armstrong number." << endl;
            }
            break;
        }
        case 2: {
            ////////////////////////
            ////      Prime     ////
            ////////////////////////
            cout << "Calculate Prime" << endl;
            int value;
            cout << "Enter value In = ";
            cin >> value;

            int i = 2, valueOut = 0;
            while (i <= sqrt(value)) {  
                if (value % i == 0) {
                    valueOut++;
                    break;  
                }
                i++;
            }

            if (valueOut == 0 && value > 1) {
                cout << value << " is Prime." << endl;
            } else {
                cout << value << " is NOT Prime." << endl;
            }
            break;
        }
        case 3: {
            ////////////////////////
            ////     Finish     ////
            ////////////////////////
            char choice;
            cout << "Do you want to finish (c/k)? ";
            cin >> choice;
            if (choice == 'c') {
                cout << "See you again!" << endl;
            } else if (choice == 'k') {
                main();  
            }
            break;
        }
    }


}
