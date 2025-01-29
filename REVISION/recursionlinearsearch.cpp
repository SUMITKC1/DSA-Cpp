#include <iostream>
using namespace std;

bool lsearch(int *arr,int len,int key){
    //base case
    if(len==0)return false;
    // proccessing
    if(arr[0]==key){
            return true;
    }    
        else{
            // recursive call
            return lsearch(arr+1,len-1,key);
        }
    
    

}


int main(){
    int arr[4]={2,1,3,5};
    bool ans=lsearch(arr,4,2);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

return 0;
}