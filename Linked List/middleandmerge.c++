#include<bits/stdc++.h>
using namespace std;
class node{
        public:
        int data;
        node* next;

        public:
        node(int data1,node* next1){
            data=data1;
            next=next1; 
        }
    };
node* constructarr2LL(vector<int> &arr){
    int n=arr.size();
    node* head=new node(arr[0],nullptr);
    node* mover=head;
    for(int i=1;i<n;i++){
        node* temp=new node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
}    
//printing the LL
void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
//middle element 
node* middleelement(node* head){
    if(head==nullptr){return nullptr;}
    node* slow=head; 
    node* fast= head;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

}
//merge sort LL
node* mergetwosortedLL(node* head1, node* head2) {
    node* dummy=new node(-1,nullptr);
    node* tail = dummy;

    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data <= head2->data) {
            tail->next = head1;
            head1 = head1->next;
        } else {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }

    // Attach the remaining part if there's any
    if (head1 != nullptr) {
        tail->next = head1;
    } else {
        tail->next = head2;
    }

    return dummy->next;
}
// merge sort LL optimal 
node* mergesortedLLwithin(node* head1,node* head2){
    if(head1==nullptr){ return head2;}
    else if(head2==nullptr){ return head1;}
    
    node* h1=head1;
    node* h2=head2;
    
    node* x=new node(-1,nullptr);
    node* temp=x;
    while(h1!=nullptr&&h2!=nullptr){
        if(h1->data<h2->data){
            
            temp->next=h1;
            temp=h1;
            h1=h1->next;
        }
        else{
            temp->next=h2;
            temp=h2;
            h2=h2->next;
        }
    }
    if(h1==nullptr){
        temp->next=h2;
    }
    else if(h2==nullptr){
        temp->next=h1;
    }
    return x->next;
    
}
int main(){
    // vector<int> arr={2,3,4,5,6};
    vector<int> arr1={5,7,9};
    vector<int> arr2={3,4,6};
    // node* head=constructarr2LL(arr);
    node* head1=constructarr2LL(arr1);
    node* head2=constructarr2LL(arr2);
    // head=middleelement(head);
    
    node* mergedHead = mergesortedLLwithin(head1,head2);
    print(mergedHead);
    
     return 0;
}