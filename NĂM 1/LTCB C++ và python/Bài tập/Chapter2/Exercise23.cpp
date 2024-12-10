#include <iostream>
using namespace std;
int main (){
double rise_cm, rise_in, rise_mm = 3.1 * 20;
rise_cm = rise_mm * 0.1;
rise_in = rise_mm * 0.0393701;
cout << "During the next 20 years ocean levels are expected to rise: \n";
cout << rise_cm << " centmeters per year. \n";
cout << rise_in << " inches per year. \n";
}
