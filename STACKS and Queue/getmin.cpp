#include <bits/stdc++.h>
using namespace std;

class MinStack{
    stack<long long> st;
    long long mini;
    public:
    MinStack(){
        while(st.empty()==false){
            st.pop();
        }
        mini=INT_MAX;
    }

    void push(int value){
        long long val=value;
        if(st.empty()){
            mini=val;
            st.push(val);
        }
        else{
            if(val<mini){
                st.push((2*val)-mini);
                mini=val;
            }
            else{st.push(val);}
        }
    }


    void pop(){
        if(st.empty()){return;}
        long long el=st.top();
        st.pop();

        if(el<mini){mini=2*mini-el;}
    } 

    int top(){
        if(st.empty()){throw runtime_error("Stack is empty");}
        long long ele=st.top();
        if(ele<mini){return mini;}
        return ele;
    }

    int getMin(){
        return mini;

    }








};


int main(){
    MinStack st;
    
    st.push(-2);
    st.push(0);
    st.push(-3);
    cout << st.getMin() << endl;  // Outputs -3
    cout << st.top() << endl;     // Outputs -3
    st.pop();
    cout << st.getMin() << endl;  // Outputs -2
    cout << st.top() << endl;     // Outputs 0
    //start ->
    


    //done....
  


  return 0;
}



