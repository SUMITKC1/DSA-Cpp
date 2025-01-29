#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data1, node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

node* constructarr2LL(vector<int> &arr) {
    int n = arr.size();
    if (n == 0) return nullptr;
    node* head = new node(arr[0], nullptr);
    node* mover = head;
    for (int i = 1; i < n; i++) {
        node* temp = new node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Printing the LL
void print(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Detect loop presence
bool detectloop(node* head) {
    if (head == nullptr || head->next == nullptr) {
        return false;
    }
    node* fast = head;
    node* slow = head;
    while (fast != nullptr && fast->next != nullptr) {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow) {
            return true;
        }
    }
    return false;
}

// Reverse a LL
node* reverse(node* head) {
    node* prev = nullptr;
    node* temp = head;
    node* nxt;
    while (temp != nullptr) {
        nxt = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nxt;
    }
    return prev;
}

// Check if the linked list is a palindrome
bool palindrome(node* head) {
    if (head == nullptr || head->next == nullptr) {
        return true;
    }
    node* fast = head;
    node* slow = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    node* mid = slow;
    node* second_half = reverse(mid);
    node* second_half_copy = second_half; // To restore the list later

    node* temp = head;
    bool is_palindrome = true;
    while (second_half != nullptr) {
        if (second_half->data != temp->data) {
            is_palindrome = false;
            break;
        }
        temp = temp->next;
        second_half = second_half->next;
    }
    
    // Restore the second half back to its original form
    reverse(second_half_copy);

    return is_palindrome;
}

int main() {
    vector<int> arr = {1, 2, 2, 2,2,1};
    node* head = constructarr2LL(arr);
    
    bool palindr = palindrome(head);
    if (palindr) {
        cout << "yes, palindrome" << endl;
    } else {
        cout << "no, not a palindrome" << endl;
    }
    return 0;
}
