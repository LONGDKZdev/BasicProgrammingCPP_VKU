#include <iostream>
#include <fstream>
#include <string>

using namespace std;


struct Student {
   string name;
   int day, month, year; 
   float mathMark;
   float physicMark;
   float languageMark;
};


struct Node {
   Student data;
   Node* next;
};


Node* head = nullptr;


Node* createNode(Student s) {
   Node* newNode = new Node();
   newNode->data = s;
   newNode->next = nullptr;
   return newNode;
}


void addStudent() {
   Student s;
   cout << "Nhap ten sinh vien: ";
   cin.ignore();
   getline(cin, s.name);

   cout << "Nhap ngay, thang, nam sinh (dd mm yyyy): ";
   cin >> s.day >> s.month >> s.year;

   cout << "Nhap diem Toan: ";
   cin >> s.mathMark;

   cout << "Nhap diem Ly: ";
   cin >> s.physicMark;

   cout << "Nhap diem Van: ";
   cin >> s.languageMark;

   Node* newNode = createNode(s);

   if (head == nullptr) {
      head = newNode;
   } else {
      Node* temp = head;
      while (temp->next != nullptr) {
            temp = temp->next;
      }
      temp->next = newNode;
   }

   cout << "Da them sinh vien thanh cong!\n";
}


void printStudentList() {
   if (head == nullptr) {
      cout << "Danh sach sinh vien rong.\n";
      return;
   }

   Node* temp = head;
   cout << "\nDanh sach sinh vien:\n";
   while (temp != nullptr) {
      cout << "Ten: " << temp->data.name << endl;
      cout << "Ngay sinh: " << temp->data.day << "/" << temp->data.month << "/" << temp->data.year << endl;
      cout << "Diem Toan: " << temp->data.mathMark << endl;
      cout << "Diem Ly: " << temp->data.physicMark << endl;
      cout << "Diem Van: " << temp->data.languageMark << endl;
      cout << "-----------------------------\n";
      temp = temp->next;
   }
}


void countStudentByYear() {
   int year;
   cout << "Nhap nam sinh can dem: ";
   cin >> year;

   int count = 0;
   Node* temp = head;

   while (temp != nullptr) {
      if (temp->data.year == year) {
            count++;
      }
      temp = temp->next;
   }

   cout << "So luong sinh vien sinh nam " << year << ": " << count << endl;
}


void findStudentByName() {
   string name;
   cout << "Nhap ten sinh vien can tim: ";
   cin.ignore();
   getline(cin, name);

   Node* temp = head;

   while (temp != nullptr) {
      if (temp->data.name == name) {
            cout << "Sinh vien " << name << " ton tai trong danh sach.\n";
            return;
      }
      temp = temp->next;
   }

   cout << "Khong tim thay sinh vien " << name << " trong danh sach.\n";
}


void deleteStudentByName() {
   string name;
   cout << "Nhap ten sinh vien can xoa: ";
   cin.ignore();
   getline(cin, name);

   if (head == nullptr) {
      cout << "Danh sach rong.\n";
      return;
   }

   if (head->data.name == name) {
      Node* temp = head;
      head = head->next;
      delete temp;
      cout << "Da xoa sinh vien " << name << ".\n";
      return;
   }

   Node* current = head;
   while (current->next != nullptr) {
      if (current->next->data.name == name) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            cout << "Da xoa sinh vien " << name << ".\n";
            return;
      }
      current = current->next;
   }

   cout << "Khong tim thay sinh vien " << name << ".\n";
}


void findTopStudent() {
   if (head == nullptr) {
      cout << "Danh sach sinh vien rong.\n";
      return;
   }

   Node* temp = head;
   float maxAvg = 0;
   Node* topStudent = nullptr;

   while (temp != nullptr) {
      float avg = (temp->data.mathMark + temp->data.physicMark + temp->data.languageMark) / 3;
      if (avg > maxAvg) {
            maxAvg = avg;
            topStudent = temp;
      }
      temp = temp->next;
   }

   if (topStudent != nullptr) {
      cout << "Sinh vien co diem trung binh cao nhat:\n";
      cout << "Ten: " << topStudent->data.name << endl;
      cout << "Diem trung binh: " << maxAvg << endl;
   }
}


void printStudentsWithLowMathMark() {
   if (head == nullptr) {
      cout << "Danh sach sinh vien rong.\n";
      return;
   }

   cout << "Danh sach sinh vien co diem Toan < 5:\n";
   Node* temp = head;

   while (temp != nullptr) {
      if (temp->data.mathMark < 5) {
            cout << "Ten: " << temp->data.name << endl;
            cout << "Diem Toan: " << temp->data.mathMark << endl;
            cout << "-----------------------------\n";
      }
      temp = temp->next;
   }
}


void writeStudentListToFile() {
   ofstream file("StudentList.txt");

   if (!file) {
      cout << "Loi khi mo file!\n";
      return;
   }

   Node* temp = head;
   while (temp != nullptr) {
      file << "Ten: " << temp->data.name << endl;
      file << "Ngay sinh: " << temp->data.day << "/" << temp->data.month << "/" << temp->data.year << endl;
      file << "Diem Toan: " << temp->data.mathMark << endl;
      file << "Diem Ly: " << temp->data.physicMark << endl;
      file << "Diem Van: " << temp->data.languageMark << endl;
      file << "-----------------------------\n";
      temp = temp->next;
   }

   file.close();
   cout << "Da ghi danh sach sinh vien vao file StudentList.txt.\n";
}

// Menu lựa chọn chức năng
int main() {
   int choice;
   do {
      cout << "\n----- Menu Quan Ly Sinh Vien -----\n";
      cout << "1. Them sinh vien\n";
      cout << "2. In danh sach sinh vien\n";
      cout << "3. Dem so sinh vien theo nam sinh\n";
      cout << "4. Tim sinh vien theo ten\n";
      cout << "5. Xoa sinh vien theo ten\n";
      cout << "6. Tim sinh vien co diem trung binh cao nhat\n";
      cout << "7. In danh sach sinh vien co diem Toan < 5\n";
      cout << "8. Ghi danh sach vao file\n";
      cout << "0. Thoat\n";
      cout << "Lua chon: ";
      cin >> choice;

      switch (choice) {
            case 1: 
               addStudent();
               break;
            case 2: 
               printStudentList(); 
               break;
            case 3: 
               countStudentByYear(); 
               break;
            case 4: 
               findStudentByName(); 
               break;
            case 5: 
               deleteStudentByName(); 
               break;
            case 6: 
               findTopStudent(); 
               break;
            case 7: 
               printStudentsWithLowMathMark(); 
               break;
            case 8:
               writeStudentListToFile(); 
               break;
            case 0: 
               cout << "Thoat chuong trinh.\n"; 
               break;
            default: 
               cout << "Lua chon khong hop le.\n";
      }
   } 
   while (choice != 0);

   return 0;
}
