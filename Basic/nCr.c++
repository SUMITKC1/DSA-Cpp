#include<iostream>
using namespace std;
//permutation and combination nCr function :-
int ncr(){    
    int n, r;
    cin>>n>>r;
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main(){
    cout<<ncr()<<endl;
    return 0;}