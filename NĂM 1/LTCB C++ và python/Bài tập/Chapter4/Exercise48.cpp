#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double quizScore,midTerm,finalScore,GPA;
    cout << "quizScore = ";cin >> quizScore;
    cout << "midTerm = ";cin >> midTerm;
    cout << "finalScore = ";cin >> finalScore;

    GPA = 0.2*quizScore + 0.3*midTerm + 0.5*finalScore;
    cout<<"The grade point average = "<<setprecision(2)<<GPA<<endl;
if(GPA <=10 && GPA >=8.5)
    cout << "Grade A"<<endl;
else if(GPA <8.5 && GPA >=7)
    cout <<"Grade B"<<endl;
else if(GPA <7 && GPA >=5.5)
    cout <<"Grade C"<<endl;
else if(GPA <5.5 && GPA >=4)
    cout <<"Grade D"<<endl;
else if(GPA >= 0 && GPA <4)
    cout <<"Grade F"<<endl;
else
    cout<<"ERROR!"<<endl;

    // switch(score){
    //     case(score<10):
    // }


    system("Pause");
}