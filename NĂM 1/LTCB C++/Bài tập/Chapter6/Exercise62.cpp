#include <iostream>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
    double length = getLength();
    double width = getWidth();
    double area = getArea(length, width);
    displayData(length, width, area);
    return 0;
}

// Function to get the rectangle's length
double getLength() {
    double length;
    cin >> length;
    return length;
}

// Function to get the rectangle's width
double getWidth() {
    double width;
    cin >> width;
    return width;
}

// Function to calculate the area of the rectangle
double getArea(double length, double width) {
    return length * width;
}

// Function to display the rectangle's details
void displayData(double length, double width, double area) {
    cout <<length << endl;
    cout << width << endl;
    cout << area << endl;
}
