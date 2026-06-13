#include <iostream>
using namespace std;

#define MAX 100 

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }
    bool push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow! Cannot insert " << value << endl;
            return false;
        }
        arr[++top] = value;
        cout << value << " pushed to stack" << endl;
        return true;
    }
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow! Stack is empty" << endl;
            return -1;
        }
        int value = arr[top--];
        cout << value << " popped from stack" << endl;
        return value;
    }
    bool search(int key) {
        for (int i = 0; i <= top; i++) {
            if (arr[i] == key) {
                cout << key << " found at position " << (top - i + 1) << " from top" << endl;
                return true;
            }
        }
        cout << key << " not found in stack" << endl;
        return false;
    }
    int peek() {
        if (top < 0) return -1;
        return arr[top];
    }
    bool isEmpty() {
        return top < 0;
    }
};
int main() {
    Stack s;
    int choice, value;

    cout << "=== Stack Operations Demo ===" << endl;
    s.push(10); 
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl; 

    s.search(20);
    s.search(99);

    s.pop(); 
    s.pop();

    cout << "Top element after pops: " << s.peek() << endl;

    s.pop();
    s.pop(); 

    return 0;
}
