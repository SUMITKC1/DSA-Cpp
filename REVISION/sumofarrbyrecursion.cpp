#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> &arr,int len){
    // base case
    if(len==0)return 0;
    if(len==1)return arr[0];
    // recursion relation
    return arr[0]+sum(arr = vector<int>(arr.begin() + 1, arr.end()),len-1);

}


int main() {
    vector<int> arr={2,3,4,1};
    // sum=10
    int n=arr.size();
    int ans=sum(arr,n);
    cout<< ans;

    return 0;   
}
