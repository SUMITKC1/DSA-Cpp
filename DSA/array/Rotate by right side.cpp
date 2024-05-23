#include <iostream>
using namespace std;



int main(){
  //input and printing array(
  int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the given array"<<endl;
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
    //start ->
    int m;
    cin>>m;
    while(m--){
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
      arr[i]=arr[i-1];
    }
    arr[0]=temp;
    }


    //done....
  //output array printing
  cout<<endl<<"the final array is:"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }


  return 0;
}



//DONE BY MITSU