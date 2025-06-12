#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct Student {
    char id[12];
    char name[30];
    char className[10];
    float mMath;
    float mPhysical;
};

float average(Student s) {
    return (s.mMath + s.mPhysical) / 2;
}

void input_students(Student s[], int& n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s[i].id >> s[i].name >> s[i].className >> s[i].mMath >> s[i].mPhysical;
    }
}

void output_students(Student s[], int n) {
    for (int i = 0; i < n; i++) {
        cout << s[i].id << " " << s[i].name << " " << s[i].className << " ";
        cout << s[i].mMath << " " << s[i].mPhysical << endl;
    }
}

void search_by_id(Student s[], int n, const char* id) {
    for (int i = 0; i < n; i++) {
        if (strcmp(s[i].id, id) == 0) {
            cout << s[i].id << " " << s[i].name << " " << s[i].className << " ";
            cout << s[i].mMath << " " << s[i].mPhysical << endl;
            return;
        }
    }
    cout << "Not found" << endl;
}

bool compare(Student a, Student b) {
    return average(a) > average(b);
}

void sort_by_avg(Student s[], int n) {
    sort(s, s + n, compare);
}

int main() {
    Student s[100];
    int n;
    input_students(s, n);
    output_students(s, n);

    char id[12];
    cin >> id;
    search_by_id(s, n, id);

    sort_by_avg(s, n);
    output_students(s, n);

    return 0;
}
