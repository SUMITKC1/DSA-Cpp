#include <iostream>
#include <vector>
using namespace std;

void merging(int *arr,int s,int mid,int e){
    int left=s;
    int right=mid+1;
    vector<int> ans;
    while(left<=mid && right<=e){
        if(arr[left]<arr[right]){
            ans.push_back(arr[left]);
            left++;
        }
        else{
            ans.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        ans.push_back(arr[left]);
        left++;
    }
    while(right<=e){
        ans.push_back(arr[right]);
        right++;
    }
    for(int i=s,k=0;i<=e;i++,k++){
        arr[i]=ans[k];
    }
}

void mergesort(int *arr,int s , int e){
    //base case
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    //sorting of the left part
    mergesort(arr,s,mid);
    //sorting of the right part
    mergesort(arr,mid+1,e);
    // merging of the both parts
    merging(arr,s,mid,e);
}


int main(){
    int arr[5]={4,1,5,2,3};
    mergesort(arr,0,4);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


return 0;
}