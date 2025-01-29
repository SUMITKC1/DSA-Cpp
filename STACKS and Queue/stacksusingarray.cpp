#include<bits/stdc++.h>
using namespace std;

// class Stack {
//   int size;//size of the stack we want 
//   int * arr;//the assumed array we are working over
//   int top;//the variable handling all the features like pop top and push 
//   public:
//     Stack() {
//       top = -1;
//       size = 1000;
//       arr = new int[size];
//     }
//   void push(int x) {
//     top++;
//     arr[top] = x;
//   }
//   int pop() {
//     int x = arr[top];
//     top--;
//     return x;
//   }
//   int Top() {
//     return arr[top];
//   }
//   int Size() {
//     return top + 1;
//   }
// };
class Stack{
  int top=-1;
  vector<int> arr;
  
  public:
  
  
  //to pop out the element from the stack 
  void pop(){
    arr[top]=0;
    top=top-1;
    
  }
  // to get the element which is on the top 
  int Top(){
    cout<<arr[top]<<endl;;
  }
  // to add the element into the stack 
  void push(int el){
    top++;
    arr[top]=el;
    
  }
  // to get the size of the stack 
  int Size(){
    cout<<top+1<<endl;
  }
};

int main() {

  Stack s;
  s.push(6);
  s.push(3);
  s.push(7);
  cout << "Top of stack is before deleting any element " << s.Top() << endl;
  cout << "Size of stack before deleting any element " << s.Size() << endl;
  cout << "The element deleted is " << s.pop() << endl;
  cout << "Size of stack after deleting an element " << s.Size() << endl;
  cout << "Top of stack after deleting an element " << s.Top() << endl;
  return 0;
}