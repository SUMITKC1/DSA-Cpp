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


int lengthofLL(node* head){
    int cnt=0;
    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
        cnt++;
    }
    return cnt;
}

int checkifpresent(node* head, int val){
    node* temp=head;
    while(temp){
        
        if(temp->data==val)return 1;
        temp=temp->next;

    }
    
    return 0;
}
int main(){
    vector<int> arr={2,3,4,5,6};//this is a variable length array so that it occupies the req. space only 
    // node y=  node(arr[4],nullptr);//this is the object which has data and next 
    // cout<<y.data<<endl;
    // node* z= new node(arr[2],nullptr);
    // cout<<z->data<<endl;
    //traversal in linked list 
     node* head=constructarr2LL(arr);
    // node* temp=head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;

    // }
    //length of the linked list when head is given 
    int length=lengthofLL(head);
    cout<<endl<<"the length of the linked list is :"<<length<<endl;
    int checkvalue=checkifpresent(head,3);
    cout<<endl<<checkvalue;
    return 0;
}