#include <iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the given array"<<endl;
    for (int i=0;i<n;i++){cout<<arr[i]<<" ";}
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }}
        counter++;
    }
    // try to solve it with for loop 
    // 
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i;j++){
    //         if(arr[i]>arr[i+1]){
    //         int temp=arr[i];
    //         arr[i]=arr[i+1];
    //         arr[i+1]=temp;}

    //     }
    // }
    cout<<endl<<"the sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

  return 0;
}