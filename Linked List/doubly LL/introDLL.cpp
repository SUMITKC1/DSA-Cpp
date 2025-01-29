#include<bits/stdc++.h>
using namespace std;

// doubly linked list node class
class node {
    public:
        int data;
        node* next;
        node* back;

        // Constructor with all parameters
        node(int data1, node* next1, node* back1) {
            data = data1;
            next = next1;
            back = back1; 
        }

        // Constructor with only data parameter
        node(int data1) {
            data = data1;
            next = nullptr;
            back = nullptr;
        }
};

// Function to print the doubly linked list from the head node
void print(node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to convert an array to a doubly linked list
node* constructarr2DLL(vector<int> &arr) {
    if (arr.empty()) return nullptr;  // If the array is empty, return nullptr

    // Create the head node
    node* head = new node(arr[0]);
    node* prev = head;

    // Loop through the rest of the array to create and link nodes
    for (size_t i = 1; i < arr.size(); ++i) {
        node* temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }

    return head;  // Return the head of the doubly linked list
}
// different types of deletion in doubly linked list
node* deletehead(node* head){
    if(head==nullptr){return head;}
    else if(head->next==nullptr){return nullptr;}
    else{
        node* temp=head;
        temp=temp->next;
        temp->back=nullptr;
        head->next=nullptr;
        
        return temp;
    }
}
node* deletetail(node* head){
    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    node* prev=temp->back;
    prev->next=nullptr;
    temp->back=nullptr;    
    delete temp;        
    return head;
}
node* deletek(node* head,int k){
    if(head==nullptr){return nullptr;}
    
    int cnt=0;
    node* temp=head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k){break;}
            
            temp=temp->next;
        }
    
        
        node* prev=temp->back;
        node* later=temp->next;
        if(prev==nullptr && later==nullptr){
            return nullptr;
        }
        else if(prev==nullptr){
                return deletehead(head);
        }   
        else if(later==nullptr){
            return deletetail(head);
        }
        
            prev->next=later;
            later->back=prev;
            temp->next=nullptr;
            temp->back=nullptr;
            delete temp;
            return head;
            }
node* deleteval(node* head,int val){
    node* temp=head;
    while(temp->data!=val){
        temp=temp->next;
    }
    node* prev=temp->back;
    node* later=temp->next;
    if(later==nullptr){
        prev->next=nullptr;
        temp->back=nullptr;
    }
    prev->next=later;
    later->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    return head;
}           
// different types of insertion in doubly linked list 
node* insertheadbefore(node* head,int val){
    node* temp=new node(val,head,nullptr);
    head->back=temp;
    return temp;
} 
node* inserttailafter(node* head,int val){
    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    node* tail=new node(val,nullptr,temp->next);
    temp->next=tail;
    return head;


}   
node* inserttailbefore(node* head,int val){
    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    node* prev=temp->back;
    node* tail=new node(val,temp,prev);
    prev->next=tail;
    temp->back=tail;
    return head;
}  
node* insertk(node* head,int val,int k){
    //val=value to be inserted and k=position where to insert
    if(head==nullptr){return new node(val,nullptr,nullptr);}
    if(k==1){
        return insertheadbefore(head,val);
    }
    int cnt=0;
    node* temp=head;
    while(temp!=nullptr){
        cnt++;
        if(cnt==k){
            node* prev=temp->back;
            node* later=temp->next;
            if(prev==nullptr&&later==nullptr){
                node* el=new node(val,nullptr,temp);
                temp->next=el;
                return head;
            }
            else if(prev==nullptr){
                return insertheadbefore(head,val);
            }
            else if(later==nullptr){
                return inserttailafter(head,val);
            }
            node* el=new node(val,temp,prev);
            prev->next=el;
            temp->back=el;
            return head;
        }
        temp=temp->next;
    }
}
node* insertval(node* head,int val,int k){
    //val=value to be inserted and k=value where to insert
    if(head==nullptr){return new node(val,nullptr,nullptr);}
    if(head->data==k){
        return insertheadbefore(head,val);
    }
    
    node* temp=head;
    while(temp!=nullptr){
        
        if(temp->data==k){
            node* prev=temp->back;
            node* later=temp->next;
            if(prev==nullptr&&later==nullptr){
                node* el=new node(val,nullptr,temp);
                temp->next=el;
                return head;
            }
            else if(prev==nullptr){
                return insertheadbefore(head,val);
            }
            else if(later==nullptr){
                return inserttailafter(head,val);
            }
            node* el=new node(val,temp,prev);
            prev->next=el;
            temp->back=el;
            return head;
        }
        temp=temp->next;
    }
}
int main() {
    vector<int> arr = {1,3,5,7,9};
    node* head = constructarr2DLL(arr);  // Call the function with the array
    // head=deletehead(head);
    // head=deletetail(head);
    // head=deletek(head,4);
    // head=deleteval(head,5);
    // head=insertheadbefore(head,6);
    // head=inserttailafter(head,700);
    // head=inserttailbefore(head,2);
    // head=insertk(head,8,4) ;
    head=insertval(head,18,5) ;
    print(head);  // Print the doubly linked list
    return 0;
}


//done and dusted