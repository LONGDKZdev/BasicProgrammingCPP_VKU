#include <iostream>
#include <string>
using namespace std;

// Function prototypes7
double getSales(string division) {
    double sales;
    do {
        cout << "Enter the quarterly sales for the " << division << " division: $";
        cin >> sales;
        if (sales < 0) {
            cout << "Sales cannot be negative. Please enter again.\n";
        }
    } while (sales < 0);
    return sales;
}

void findHighest(double ne, double nw, double se, double sw) {
    double highest = ne;
    string name = "Northeast";

    if (nw > highest) {
        highest = nw;
        name = "Northwest";
    }
    if (se > highest) {
        highest = se;
        name = "Southeast";
    }
    if (sw > highest) {
        highest = sw;
        name = "Southwest";
    }

    cout << "The highest grossing division is " << name << " with sales of $" << highest << ".\n";

}
    int main() {
    double northeast = getSales("Northeast");
    double northwest = getSales("Northwest");
    double southeast = getSales("Southeast");
    double southwest = getSales("Southwest");

    findHighest(northeast, northwest, southeast, southwest);

    return 0;
}

