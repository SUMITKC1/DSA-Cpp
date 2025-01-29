#include <iostream>
using namespace std;
void input_array(){
    
}
void smallest(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int small=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            small=arr[i];
        }
        
    }
    cout<<"the given array "<<endl;
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<"the smallest "<<small<<endl;
}
int main(){
    smallest();
    return 0;
}