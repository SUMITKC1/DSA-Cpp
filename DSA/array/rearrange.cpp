//so this below is the code if we have equal number of pos and neg numbers in the given array 
// #include <iostream>
// using namespace std;

// int main(){
//     int num[6]={2,-6,5,1,-8,-9};
    
//     int ans[6];
//     int pos=0;
//     int neg=1;
//     for(int i=0;i<6;i++){
//         if(num[i]<0){
//             ans[neg]=num[i];
//             neg=neg + 2;
//         }
//         else if(num[i]>=0){
//             ans[pos]=num[i];
//             pos=pos+2;

//         }
//     }
//     cout<<"[";
//     for(int i=0;i<6;i++){
//         if( i==5){
//             cout<<ans[i];
//         }
//   else{cout<<ans[i]<<",";}
// }
// cout<<"]";
//     return 0;
// }


//the code below can rerrange any sort of arrange in pos and neg no. alternatively and remaining in exact order 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
    int arr[6]={3,2,1,-9,-7,5};
    int n=6;
    cout << "the given array" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            pos.push_back(arr[i]);
        } else {
            neg.push_back(arr[i]);
        }
    }

    if (pos.size() > neg.size()) {
        for (int i = 0; i < neg.size(); i++) {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++) {
            arr[index] = pos[i];
            index++;
        }
    } else {
        for (int i = 0; i < pos.size(); i++) {
            arr[2 * i] = pos[i];
            arr[2 * i + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++) {
            arr[index] = neg[i];
            index++;
        }
    }

    cout << endl << "the final array is:" << endl;
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    cout << "]";

    return 0;
}
