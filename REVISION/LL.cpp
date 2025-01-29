// #include <iostream>
// using namespace std;
// //class
// class office{
//     public://access modifier 
//     int id;//data member
//     int salary;//data member
//     void task(){
//         cout<<"the employee id is :"<<id<<"and his/her salary is:"<<salary<<endl;
//     }//member function
// };

// int main(){
// office check;
// check.id=52;//accesing data member 
// check.salary=1000000;
// check.task();//accesing member function

// return 0;
// }



#include <iostream>
using namespace std;

class ListNode{
    public:
    int data;
    node* next;

    
    // constructor
    ListNode(int data1,node* next1){
        data=data1;
        next=next1;
    }

    ListNode(int data1){
        data=data1;
        next=nullptr;
    }
};

int main(){
ListNode* y=new ListNode(5);
cout<<y<<'\n';
cout<<y->data<<'\n';
delete y;
return 0;
}