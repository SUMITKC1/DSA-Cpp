#include <iostream>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* next; // Corrected the type

    // Constructor
    ListNode(int data1, ListNode* next1) {
        data = data1;
        next = next1;
    }

    ListNode(int data1) {
        data = data1;
        next = nullptr;
    }
};

int main() {
    ListNode* y = new ListNode(5);
    cout << y << '\n';
    cout << y->data << '\n';

    // Cleaning up allocated memory
    delete y;

    return 0;
}
