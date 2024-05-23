#include <iostream>
using namespace std;



int main(){
    // input and printing array
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the given array"<<endl;
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
    
    // rotating by m place 
    int m;//number of times rotation needed
    cin>>m;
    while(m--){
    int temp=arr[0];
    for (int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;}
    //output array printing
    cout<<endl<<"the final array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



  return 0;
}