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
    int ans=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            if(cnt>ans){ans++;}
        }
        else{cnt=0;}
    }
    cout<<endl<<"the max occurence is: "<<ans<<endl;


    //done....
  


  return 0;
}
// art by MITSU.......


