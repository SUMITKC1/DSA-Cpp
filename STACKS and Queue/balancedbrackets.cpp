#include <bits/stdc++.h>
using namespace std;

bool balancebrackets(string s){
    int n=s.size();
    stack<int> st;
    for(int i=0;i<n;i++){
        if(s[i]=='[' || s[i]=='(' || s[i]=='{' ){
            st.push(s[i]);

        }
        else{
            if(st.empty()){return false;}//s="]()" so in this when initially we have ] so we have nothing to check in stack and same time stack is empty as it is first one so one the extreme case .................................
            char c=st.top();
            st.pop();
            if(s[i]==']' && c=='[' || s[i]==')'&&c=='(' || s[i]=='}'&&c=='{' ){
                continue;
            }
            else{return false;}

        }
    }
    if(st.empty()){return true;}//this is also necessary to check as in this case we can see that string s="[()" will push [ and ( but then ) will match with ( and string ends but still we have the [ bracket hence stack must be empty at last .....
    else{return false;}
}

int main(){
    
    //start ->
     string s="()[{}()]";
    if(balancebrackets(s))
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;



    //done....
  


  return 0;
}



