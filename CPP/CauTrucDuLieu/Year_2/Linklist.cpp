#include <iostream>
using namespace std;

// Định nghĩa cấu trúc Node cho Singly Linked List
struct Node {
   int data;
   Node* next;
};

// Class Singly Linked List
class SinglyLinkedList {
private:
   Node* head;
public:
   SinglyLinkedList() {
      head = nullptr;
   }

    // Thêm Node vào đầu danh sách
   void insertFirst(int value) {
      Node* newNode = new Node();
      newNode->data = value;
      newNode->next = head;
      head = newNode;
   }

    // Thêm Node vào cuối danh sách
   void insertLast(int value) {
      Node* newNode = new Node();
      newNode->data = value;
      newNode->next = nullptr;
      
      if (head == nullptr) {
            head = newNode;
            return;
      }
      
      Node* temp = head;
      while (temp->next != nullptr) {
            temp = temp->next;
      }
      temp->next = newNode;
   }

    // Xóa Node đầu tiên
   void deleteFirst() {
      if (head == nullptr) {
            cout << "Danh sách rỗng, không thể xóa!\n";
            return;
      }
      Node* temp = head;
      head = head->next;
      delete temp;
   }

    // Xóa Node cuối cùng
   void deleteLast() {
      if (head == nullptr) {
            cout << "Danh sách rỗng, không thể xóa!\n";
            return;
      }

      if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
      }

      Node* temp = head;
      while (temp->next->next != nullptr) {
            temp = temp->next;
      }
      delete temp->next;
      temp->next = nullptr;
   }

    // Duyệt và in danh sách
   void display() {
      Node* temp = head;
      while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
      }
      cout << "nullptr\n";
   }
};

int main() {
   SinglyLinkedList list;

   // Thêm phần tử vào đầu danh sách
   list.insertFirst(10);
   list.insertFirst(20);
   list.insertFirst(30);
   cout << "list after insert First:\n";
   list.display();

   // Thêm phần tử vào cuối danh sách
   list.insertLast(40);
   list.insertLast(50);
   cout << "list after insert last :\n";
   list.display();

   // Xóa phần tử đầu tiên
   list.deleteFirst();
   cout << "list after delete fist:\n";
   list.display();

   // Xóa phần tử cuối cùng
   list.deleteLast();
   cout << "list after delete last :\n";
   list.display();

   return 0;
}
