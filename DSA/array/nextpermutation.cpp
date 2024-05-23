#include <iostream>
#include <algorithm>
using namespace std;



int main(){
  //input and printing array(
//   int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    int arr[7]={2,1,5,4,3,0,0};
    int n=7;
    cout<<"the given array"<<endl;
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
    //start ->
    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
    }
    for(int i=n-1;i>=index;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]);
            break;
        }
    }
    reverse(arr + index + 1, arr + n);



    //done....
  //output array printing
cout<<endl<<"the final array is:"<<endl;
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}



  return 0;
}



