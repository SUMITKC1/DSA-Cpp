#include <iostream>
using namespace std;

string reverse(int i,int j, string s){
    //base case 
    if(i>=j)return s;
    // processing
    swap(s[i],s[j]);
    i++;
    j--;
    return reverse(i,j,s);
}


int main(){
    string s="fsdhfskjdfh";
    cout<<reverse(0,s.length()-1,s)<<endl;

return 0;
}