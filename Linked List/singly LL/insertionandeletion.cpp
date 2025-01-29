#include<bits/stdc++.h>
using namespace std;
//node data type
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
//length of LL
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
//convert array into LL
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
//deletion head,tail,kth element and value val(head is the 1st element)
node* removehead(node* head){
    if(head==NULL)return head;
    node* temp=head;
    head=head->next;
    delete temp;
    return head; 
}
node* deletetail(node* head){
    if(head==NULL || head->next==NULL)return NULL;
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
node* deletek(node* head,int k){
    if(head==NULL)return head;
    if(k==1){
        head=removehead(head);
        return head;
    }
    int cnt=0;
    node* temp=head;
    node* prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            delete temp;
            break ;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
node* deleteval(node* head,int val){
    if(head==NULL)return head;
    if(head->data==val){
        head=removehead(head);
        return head;
    }
    
    node* temp=head;
    node* prev=NULL;
    while(temp!=NULL){
        
        if(temp->data==val){
            prev->next=prev->next->next;
            delete temp;
            break ;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
//insertion in LL(all same as in delete)
node* inserthead(node* head,int val){
    node* temp=new node(val,head);
    return temp;
}
node* inserttail(node* head, int val) {
    if (head == nullptr) {
        return new node(val, nullptr);
    }
//temp->next is used here instead of temp only !!!
    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    node* tail = new node(val, nullptr); // Update the next pointer to nullptr
    temp->next = tail;
    return head;
}
node* insertk(node* head,int val,int k){
    
    
    
    if(head==NULL){if(k==1){return new node(val,nullptr);}
    else{return head;}}
    if(k==1){
        return new node(val,head);
    }
    int cnt=0;
        node* temp=head;
        
        while(temp!=nullptr){
            cnt++;
            if(cnt==k-1){
                node* x=new node(val,temp->next);
                temp->next=x;
                break;
            }
            temp=temp->next;
        }
    return head;
    }
node* insertBeforeValue(node* head,int val,int k){
    //here k is the value before which we have to insert the val
    //val is the value which is going to be inserted    
    
    
    if(head==NULL){return nullptr;}
    if(head->data==k){
        return new node(val,head);
    }
    
        node* temp=head;
        
        while(temp->next!=nullptr){
            
            if(temp->next->data==k){
                node* x=new node(val,temp->next);
                temp->next=x;
                break;
            }
            temp=temp->next;
        }
    return head;
    }

int main(){
    vector<int> arr={2,3,5,6};
    node* head=constructarr2LL(arr);
    head=removehead(head);
    // head=deletetail(head);
    // head=deletek(head,5);
    // head=deleteval(head,3);
    // head=inserthead(head,5);
    // head=insertk(head,10,7);
    // head=insertBeforeValue(head,100,5);
    print(head);

    return 0;
}