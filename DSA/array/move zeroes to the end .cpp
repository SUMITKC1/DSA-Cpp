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
    int j = 0; // Index of the last non-zero element
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            if (i != j) { // Check if the element is already in its correct position
                swap(arr[i], arr[j]); // Swap directly using swap function
            }
            j++;
        }
    }


    //done....
  //output array printing
cout<<endl<<"the final array is:"<<endl;
for(int i=0;i<n;i++){
  cout<<arr[i]<<" ";
}


  return 0;
}


// CODE BY MITSU 
