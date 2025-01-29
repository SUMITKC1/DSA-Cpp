#include <iostream>
using namespace std;

bool pali(int i,int j,string str){
    //base case
    if(i>=j)return true;
    // processing
    if(str[i]!=str[j]){
        return false;
    }
    return pali(i+1,j-1,str);
}

int main(){
    string s="ben";
    if(pali(0,s.length()-1,s)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

return 0;
}