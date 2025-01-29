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

void print(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

node* addtwonumbersLL(node* head1,node* head2){
    node* t1=head1;
    node* t2=head2;
    node* dummynode= new node(-1,nullptr);
    node* current=dummynode;
    int carry=0;
    while(t1!=nullptr || t2!=nullptr){
        int sum=carry;
        if(t1)sum+=t1->data;
        if(t2)sum+=t2->data;
        node*t3=new node(sum%10,nullptr);
        carry=(sum)/10;
        
        current->next=t3;
        current=current->next;
        if(t1)t1=t1->next;
        if(t2)t2=t2->next;
    }
    if(carry){
        node* t3=new node(carry,nullptr);
        current->next=t3;
    }
    
    return dummynode->next;
}


int main(){
    
    vector<int> arr1={1,5,7};
    vector<int> arr2={3,2};
    // node* head=constructarr2LL(arr);
    node* head1=constructarr2LL(arr1);
    node* head2=constructarr2LL(arr2);
    print(head1);
    print(head2);
    node* head=addtwonumbersLL(head1,head2);
    print(head);
     return 0;
}