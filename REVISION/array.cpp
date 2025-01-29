// largest element in the array
// #include <bits/stdc++.h>
 
// using namespace std;
// int findLargestElement(int arr[], int n) {
 
//   int max = arr[0];
//   for (int i = 0; i < n; i++) {
//     if (max < arr[i]) {
//       max = arr[i];
//     }
//   }
//   return max;
// }
// int main() {
//   int arr1[] = {2,5,1,3,0};
//   int n = 5;
//   int max = findLargestElement(arr1, n);
//   cout << "The largest element in the array is: " << max << endl;
 
//   int arr2[] =  {8,10,5,7,9};
//   n = 5;
//   max = findLargestElement(arr2, n);
//   cout << "The largest element in the array is: " << max<<endl;
//   return 0;
// }



#include <iostream>
#include <climits>
using namespace std;

pair<int,int> x(int arr[]){
    int l,sl;
    int n=6;
    l=INT_MIN;
     sl=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>l){
            sl=l;
            l=arr[i];
            
        }
        else{
            if(arr[i]>sl && arr[i]!=l){
                sl=arr[i];
            }
        }
    }
    return make_pair(l, sl);
}

int main(){
int arr[6]={1,2,4,7,7,5};
pair<int, int> result = x(arr);


cout<<"largest"<<result.first<<endl;
cout<<"s-lar"<<result.second<<endl;

return 0;
}


