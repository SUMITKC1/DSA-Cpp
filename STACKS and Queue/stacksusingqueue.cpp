#include <bits/stdc++.h>
using namespace std;
//stack using single queue 
class Stack{
    queue<int> q;
    public:
    void Push(int x){
        q.push(x);
        for(int i=0;i<q.size();i++){
            q.push(q.front());
            q.pop();
        }
    }

    int Pop(){
        q.pop();
    }
    int Top(){
        return q.size();    
        }
    int Size(){
        return q.size();
    }    
};

int main(){
    Stack s;
    //start ->
     
  s.Push(2);
  
  cout << "Top of the stack: " << s.Top() << endl;
  



    //done....
  


  return 0;
}



