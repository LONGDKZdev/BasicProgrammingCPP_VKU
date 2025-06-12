#include <bits/stdc++.h>
#include <cstring>
using namespace std;

struct Student {
   char name[30];
   char className[10];
   float math;
   float physical;
};

void addStudent(Student*& students, int& count) {
   Student* temp = new Student[count + 1];
   for (int i = 0; i < count; i++) {
      temp[i] = students[i];
   }
   delete[] students;
   
   cout << "Enter name: ";
   cin.ignore();
   cin.getline(temp[count].name, 30);
   cout << "Enter class: ";
   cin.getline(temp[count].className, 10);
   cout << "Enter math score: ";
   cin >> temp[count].math;
   cout << "Enter physical score: ";
   cin >> temp[count].physical;
   
   students = temp;
   count++;
}

void searchStudent(Student* students, int count, const char* name) {
   for (int i = 0; i < count; i++) {
      if (strcmp(students[i].name, name) == 0) {
         cout << "Student found: " << students[i].name << " - " << students[i].className << endl;
            return;
      }
   }
   cout << "Student not found.\n";
}

void editStudentClass(Student* students, int count, const char* name) {
   for (int i = 0; i < count; i++) {
      if (strcmp(students[i].name, name) == 0) {
         cout << "Enter new class: ";
         cin.ignore();
         cin.getline(students[i].className, 10);
         cout << "Class updated!\n";
            return;
      }
   }
   cout << "Student not found.\n";
}

int main() {
   Student* students = nullptr;
   int count = 0;
   int choice;
   char name[30];

   do {
      cout << "\n1. Add Student\n2. Search Student\n3. Edit Student Class\n4. Exit\nChoice: ";
      cin >> choice;
      switch (choice) {
            case 1:
               addStudent(students, count);
               break;
            case 2:
               cout << "Enter name to search: ";
               cin.ignore();
               cin.getline(name, 30);
               searchStudent(students, count, name);
               break;
            case 3:
               cout << "Enter name to edit class: ";
               cin.ignore();
               cin.getline(name, 30);
               editStudentClass(students, count, name);
               break;
            }
   } while (choice != 4);

   delete[] students;
   return 0;
}

