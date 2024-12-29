#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    double examScores1, examScores2, examScores3, midtermScore, finalScore;
    // while((examScores1,examScores2,examScores3,midtermScore,finalScore) >= 0 && (examScores1,examScores2,examScores3,midtermScore,finalScore) <=10 ){
    cout<<"=====================Exam Scores===================="<<endl;
    cout<<"Enter Exam Scores 1 = ";cin>>examScores1;
    cout<<"Enter Exam Scores 2 = ";cin>>examScores2;
    cout<<"Enter Exam Scores 3 = ";cin>>examScores3;
    cout<<"====================Midterm Scores=================="<<endl;
    cout<<"Enter Midterm Score = ";cin>>midtermScore;
    cout<<"====================Final Scores===================="<<endl;
    cout<<"Enter Final Score = ";cin>>finalScore;
    cout<<"====================Table Grade===================="<<endl;
    cout<<"Sum Exam Scores  = "<<examScores1+examScores2+examScores3<<endl;
    cout<<"Midterm Scores  = "<<midtermScore<<endl;
    cout<<"Final Scores  = "<<finalScore<<endl;
    // }
    
}