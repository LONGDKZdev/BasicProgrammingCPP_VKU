#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct Node {
    char data;
    Node* next;
};

Node* top = nullptr;

void push(char val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}

char pop() {
    if (!top) return '\0';
    Node* temp = top;
    char val = top->data;
    top = top->next;
    delete temp;
    return val;
}

char peek() {
    if (!top) return '\0';
    return top->data;
}

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

void infixToPostfix(const char* infix, char* postfix) {
    int j = 0;
    for (int i = 0; i < strlen(infix); i++) {
        char c = infix[i];
        if (isalnum(c)) {
            postfix[j++] = c;
        } else if (isOperator(c)) {
            while (top && precedence(peek()) >= precedence(c))
                postfix[j++] = pop();
            push(c);
        }
    }
    while (top)
        postfix[j++] = pop();
    postfix[j] = '\0';
}

void reverse(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
        swap(str[i], str[len - i - 1]);
}

void infixToPrefix(const char* infix, char* prefix) {
    char revInfix[100], revPostfix[100];
    strcpy(revInfix, infix);
    reverse(revInfix);

    for (int i = 0; i < strlen(revInfix); i++) {
        if (revInfix[i] == '(') revInfix[i] = ')';
        else if (revInfix[i] == ')') revInfix[i] = '(';
    }

    top = nullptr;
    infixToPostfix(revInfix, revPostfix);
    reverse(revPostfix);
    strcpy(prefix, revPostfix);
}

int evalPostfix(const char* expr, int a, int b) {
    struct NumNode {
        int data;
        NumNode* next;
    };
    NumNode* numTop = nullptr;

    auto pushNum = [&](int val) {
        NumNode* newNode = new NumNode{val, numTop};
        numTop = newNode;
    };

    auto popNum = [&]() -> int {
        if (!numTop) return 0;
        NumNode* temp = numTop;
        int val = numTop->data;
        numTop = numTop->next;
        delete temp;
        return val;
    };

    for (int i = 0; i < strlen(expr); i++) {
        char c = expr[i];
        if (c == 'a') pushNum(a);
        else if (c == 'b') pushNum(b);
        else {
            int val2 = popNum();
            int val1 = popNum();
            switch (c) {
                case '+': pushNum(val1 + val2); break;
                case '-': pushNum(val1 - val2); break;
                case '*': pushNum(val1 * val2); break;
                case '/': pushNum(val1 / val2); break;
            }
        }
    }
    return popNum();
}

int main() {
    const char* infix = "a+b";
    char postfix[100], prefix[100];

    infixToPostfix(infix, postfix);
    cout << "a) Infix to Postfix: " << postfix << endl;

    infixToPrefix(infix, prefix);
    cout << "b) Infix to Prefix: " << prefix << endl;

    int result = evalPostfix(postfix, 3, 5);
    cout << "c) Evaluation with a=3, b=5: " << result << endl;

    return 0;
}
