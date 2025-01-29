#include <bits/stdc++.h>
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
    if (arr.empty()) return nullptr;
    node* head = new node(arr[0]);
    node* mover = head;
    for (size_t i = 1; i < arr.size(); ++i) {
        mover->next = new node(arr[i]);
        mover = mover->next;
    }
    return head;
}
int lengthofLL(node* head){
    int cnt=0;
    node* temp=head;
    while(temp){
        
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
void print(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

node* rotate(node* head,int k ){
    int len=lengthofLL(head);
    int rotations= k%len;
    if(rotations==0){return head;}
    if(head==nullptr || head->next==nullptr){return head;}
    node* tail=head;
    while(tail->next!=nullptr){tail=tail->next;}
    tail->next=head;
    int t=len-rotations;
    int cnt=1;
    node* temp=head;
    while(cnt!=t){
        temp=temp->next;
        cnt++;
    }
    head=temp->next;
    temp->next=nullptr;
    return head;
    

}

int main() {
    vector<int> arr = {2, 3, 4, 5, 6};
    node* head = constructarr2LL(arr);
    node* x = rotate(head, 12);
    print(x);

    return 0;
}
