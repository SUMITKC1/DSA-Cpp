#include <iostream>
using namespace std;

bool bsearch(int *arr,int s,int e,int key){
    
    // base cases
    
    if(s>e)return false;
    // processing
    int mid=s + (e - s) / 2;
    if(arr[mid]==key){
        return true;
    }
    
        if(key>arr[mid]){
            return bsearch(arr,mid+1,e,key);
        }
        else{
            return bsearch(arr,s,mid-1,key);
        }

}



int main(){
     int arr[4]={1,2,4,6};
     //start is 0th index
     // end is 3rd index
     // we have to search 2 via binary search
    bool ans=bsearch(arr,0,3,6);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

return 0;
}