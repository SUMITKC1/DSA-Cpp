#include <iostream>
#include <vector>
using namespace std;



int main(){
  //input and printing array(
  int n;
    cin>>n;
    int arr[n];
    // int arr[6]={10,22,12,3,0,6};
    // int n=6;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the given array"<<endl;
    for(int i=0;i<n;i++){cout<<arr[i]<<" ";}
    cout<<endl;
    //start ->
    
    vector<int> a;
    int max= arr[n-1];
    a.push_back(max);
    for (int i=n-2;i>=0;i--){
      if(arr[i]>max){
        a.push_back(arr[i]);
        max=arr[i];
        
      }
    }


    //done....
  //output array printing
// cout<<endl<<"the final array is:"<<endl<<"[";
// for(int i=0;i<a.size();i++){
//   cout<<a[i]<<",";
// }
// cout<<"]";
cout << "The leaders in the array are:" << endl << "[";
    for (int i = a.size() - 1; i >= 0; i--) {
        cout << a[i];
        if (i != 0) {
            cout << ", ";
        }
    }
    cout << "]" << endl;


  return 0;
}



