#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int data1, node* next1) {
        data = data1;
        next = next1;
    }
};

node* constructarr2LL(vector<int> &arr) {
    int n = arr.size();
    node* head = new node(arr[0], nullptr);
    node* mover = head;
    for (int i = 1; i < n; i++) {
        node* temp = new node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void print(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int lengthofLL(node* head) {
    int cnt = 0;
    node* temp = head;
    while (temp) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

node* removehead(node* head) {
    if (head == nullptr) return head;
    node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

node* deletek(node* head, int k) {
    if (head == nullptr || k < 1) return head;
    if (k == 1) {
        return removehead(head);
    }
    int cnt = 1;
    node* temp = head;
    node* prev = nullptr;
    while (temp != nullptr && cnt < k) {
        prev = temp;
        temp = temp->next;
        cnt++;
    }
    if (temp != nullptr) {
        prev->next = temp->next;
        delete temp;
    }
    return head;
}

node* deletingnthnodefromtheend(node* head, int n) {
    int l = lengthofLL(head);
    int del = l - n + 1;
    return deletek(head, del);
}

int main() {
    vector<int> arr = {2, 3, 4, 5, 6};
    node* head = constructarr2LL(arr);
    head = deletingnthnodefromtheend(head, 2);
    print(head); // Add print statement to verify the list after deletion
    return 0;
}
