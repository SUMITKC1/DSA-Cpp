#include <iostream>
using namespace std;

void selection_sort(){
  //input array
  int n;
  cin>>n;
  int arr[n];
  for (int i=0;i<n;i++){
     cin>>arr[i];
  }
  // printing input array
  cout<<"the given array"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  //sorting
  for(int i=0;i<n-1;i++){
    
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[i]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    
    }
    

  }
  //printing sorted array
  cout<<endl<<"the sorted array "<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

}

int main(){
  selection_sort();

  return 0;
}