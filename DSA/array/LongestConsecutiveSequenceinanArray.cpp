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
   


    //done....
  //output array printing
cout<<endl<<"the final array is:"<<endl<<"[";
for(int i=0;i<n;i++){
  cout<<arr[i];
  if(i!=n-1){
    cout<<",";
  }
}
cout<<"]";


  return 0;
}



