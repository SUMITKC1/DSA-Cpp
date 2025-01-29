#include<bits/stdc++.h>
using namespace std;
class node{
        public:
        int data;
        node* next;
        node* back;

        public:
        node(int data1,node* next1,node* back1){
            data=data1;
            next=next1; 
            back=back1;
        }
    };

node* constructarr2DLL(vector<int> &arr) {
    if (arr.empty()) return nullptr;  // If the array is empty, return nullptr

    // Create the head node
    node* head = new node (arr[0],nullptr,nullptr);
    node* prev = head;

    // Loop through the rest of the array to create and link nodes
    for (size_t i = 1; i < arr.size(); ++i) {
        node* temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;  // Return the head of the doubly linked list
}
void print(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
node* reverseDLL(node* head){
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    
    node* temp=nullptr;
    node* current=head;
    while(current!=nullptr){
        temp=current->back;
        current->back=current->next;
        current->next=temp;
        
        current=current->back;
    }
    return temp->back;
}

int main(){
    vector<int> arr={2,3,4,5,6};
    node* head=constructarr2DLL(arr);
    head=reverseDLL(head);
    print(head);
     return 0;
}