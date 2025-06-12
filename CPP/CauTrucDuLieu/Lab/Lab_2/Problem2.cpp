#include <iostream>
using namespace std;


struct Node {
	int coeff;		
	int num;		
	Node* next;		
};


Node* createNode(int coeff, int num) {
	Node* newNode = new Node();
	newNode->coeff = coeff;
	newNode->num = num;
	newNode->next = nullptr;
	return newNode;
}


void insertNode(Node*& head, int coeff, int num) {
	Node* newNode = createNode(coeff, num);

	// Nếu danh sách rỗng hoặc số mũ của node mới lớn hơn node đầu tiên
	if (head == nullptr || num > head->num) {
		newNode->next = head;
		head = newNode;
		return;
	}

	// Tìm vị trí thích hợp để chèn node
	Node* temp = head;
	while (temp->next != nullptr && temp->next->num > num) {
		temp = temp->next;
	}

	// Nếu có cùng số mũ, cộng hệ số
	if (temp->next != nullptr && temp->next->num == num) {
		temp->next->coeff += coeff;
	} else {
		newNode->next = temp->next;
		temp->next = newNode;
	}
}


void inputPolynomial(Node*& poly) {
	int n, coeff, num;
	cout << "Nhap so luong don thuc: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Nhap he so va so mu: ";
		cin >> coeff >> num;
		insertNode(poly, coeff, num);
	}
}


void printPolynomial(Node* poly) {
	if (poly == nullptr) {
		cout << "0\n";
		return;
	}

	while (poly != nullptr) {
		cout << poly->coeff << "x^" << poly->num;
		poly = poly->next;
		if (poly != nullptr) {
			cout << " + ";
		}
	}
	cout << endl;
}


Node* addPolynomials(Node* poly1, Node* poly2) {
	Node* result = nullptr;

	while (poly1 != nullptr || poly2 != nullptr) {
		int coeff, num;

		if (poly1 == nullptr) { 
			coeff = poly2->coeff;
			num = poly2->num;
			poly2 = poly2->next;
		} else if (poly2 == nullptr) { 
			coeff = poly1->coeff;
			num = poly1->num;
			poly1 = poly1->next;
		} else if (poly1->num > poly2->num) {
			coeff = poly1->coeff;
			num = poly1->num;
			poly1 = poly1->next;
		} else if (poly1->num < poly2->num) {
			coeff = poly2->coeff;
			num = poly2->num;
			poly2 = poly2->next;
		} else { 
			coeff = poly1->coeff + poly2->coeff;
			num = poly1->num;
			poly1 = poly1->next;
			poly2 = poly2->next;
		}

		insertNode(result, coeff, num);
	}

	return result;
}


Node* subtractPolynomials(Node* poly1, Node* poly2) {
	Node* result = nullptr;

	while (poly1 != nullptr || poly2 != nullptr) {
		int coeff, num;

		if (poly1 == nullptr) { 
			coeff = -poly2->coeff;
			num = poly2->num;
			poly2 = poly2->next;
		} else if (poly2 == nullptr) { 
			coeff = poly1->coeff;
			num = poly1->num;
			poly1 = poly1->next;
		} else if (poly1->num > poly2->num) {
			coeff = poly1->coeff;
			num = poly1->num;
			poly1 = poly1->next;
		} else if (poly1->num < poly2->num) {
			coeff = -poly2->coeff;
			num = poly2->num;
			poly2 = poly2->next;
		} else { 
			coeff = poly1->coeff - poly2->coeff;
			num = poly1->num;
			poly1 = poly1->next;
			poly2 = poly2->next;
		}

		insertNode(result, coeff, num);
	}

	return result;
}


int main() {
	Node* poly1 = nullptr;
	Node* poly2 = nullptr;
	Node* sum = nullptr;
	Node* difference = nullptr;

	cout << "Nhap da thuc 1:\n";
	inputPolynomial(poly1);
	cout << "Da thuc 1: ";
	printPolynomial(poly1);

	cout << "\nNhap da thuc 2:\n";
	inputPolynomial(poly2);
	cout << "Da thuc 2: ";
	printPolynomial(poly2);


	sum = addPolynomials(poly1, poly2);
	cout << "\nTong hai da thuc: ";
	printPolynomial(sum);


	difference = subtractPolynomials(poly1, poly2);
	cout << "\nHieu hai da thuc: ";
	printPolynomial(difference);

	return 0;
}
