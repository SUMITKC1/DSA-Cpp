// #include <iostream>
// using namespace std;
// //selection sorting 
// void s(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int mini=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[mini]){
//                 mini=j;
//             }
//         }
//         int temp=arr[mini];
//         arr[mini]=arr[i];
//         arr[i]=temp;
//         //here the i index is the first element and mini is the index of minimum element out of the number from (i+1)th to the very end of the array 
//     }
    
// }


// int main(){
// int arr[5]={7,5,9,2,1};
// int n=5;
// s(arr,n);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

// return 0;
// }

















// //H W--> bubble sorting 
// #include <iostream>
// using namespace std;

// void bub(int arr[],int n){
//     for(int i=n-1;i>=0;i--){
//         for(int j=0;j<i;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }

//     }
// }


// int main(){
//     int arr[5]={7,5,9,2,1};
//     int n=5;
//     bub(arr,5);
//     for(int i=0;i<n;i++){
    
//     cout<<arr[i]<<" ";
// }

// return 0;
// }


// //insertion sorting 
// #include <iostream>
// using namespace std;

// void inser(int arr[],int n){
//     for(int i=1;i<n;i++){
//         while(i>0 && arr[i]<arr[i-1]){
//             int temp=arr[i];
//             arr[i]=arr[i-1];
//             arr[i-1]=temp;
//             i--;
//         }

//     }
// }


// int main(){
//     int arr[5]={9,5,1,4,8};
//     int n=5;
//     inser(arr,5);
//     for(int i=0;i<n;i++){
    
//     cout<<arr[i]<<" ";
// }

// return 0;
// }



// //merge sorting 

// #include <iostream>
// #include <vector>
// using namespace std;

// void merge(int arr[], int low, int mid, int high) {
//     vector<int> temp;
//     int left = low;
//     int right = mid + 1;

//     // Storing elements in the temporary array in a sorted manner
//     while (left <= mid && right <= high) {
//         if (arr[left] <= arr[right]) {
//             temp.push_back(arr[left]);
//             left++;
//         } else {
//             temp.push_back(arr[right]);
//             right++;
//         }
//     }

//     // If elements on the left half are still left
//     while (left <= mid) {
//         temp.push_back(arr[left]);
//         left++;
//     }

//     // If elements on the right half are still left
//     while (right <= high) {
//         temp.push_back(arr[right]);
//         right++;
//     }

//     // Transferring all elements from temporary to arr
//     for (int i = low; i <= high; i++) {
//         arr[i] = temp[i - low];
//     }
// }

// void division(int arr[], int low, int high) {
//     if (low >= high) return;
//     int mid = low + (high - low) / 2;
//     division(arr, low, mid);
//     division(arr, mid + 1, high);
//     merge(arr, low, mid, high);
// }

// void mergeSort(int arr[], int n) {
//     division(arr, 0, n - 1);
// }

// int main() {
//     int arr[5] = {9, 5, 1, 4, 8};
//     int n = 5;
//     mergeSort(arr, n);
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


// //quick sorting 
// #include <iostream>
// using namespace std;

// void quicksort(int arr[],int low,int high){
//     int pivot=arr[low];
//     while(low<=high){
//         if(arr[low]>pivot&&arr[high]<pivot){
//             swap(arr[low],arr[high]);
//         }
//         else if(arr[low]>pivot && arr[high]>pivot){
//             high--;
//         }
//         else if(arr[low]<pivot&&arr[high]<pivot){
//             low++;
//         }
//         else{
//             low++;
//             high--;
//         }
//     }
// }

// void quickSortAlgo(int arr[],int n){
//     int low=0;
//     int high=n-1;
//     int mid=(low+high)/2;
//     quicksort(arr,low,high);
//     quicksort(arr,low,mid-1);
//     quicksort(arr,mid+1,high);
// }





// int main(){
//     int arr[5] = {9, 5, 1, 4, 8};
//     int n = 5;
//     quickSortAlgo(arr, n);
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

// return 0;
// }





#include <iostream>
using namespace std;

int qs(int arr[], int low, int high) {
    int pivot = arr[low];
    while (low <= high) {
        while (arr[low] <= pivot) {
            low++;
            if (low > high) break;
        }
        while (arr[high] > pivot) {
            high--;
            if (low > high) break;
        }
        if (low < high) {
            swap(arr[low], arr[high]);
        }
    }
    swap(arr[low - 1], arr[high]); // Swap pivot with element at high
    return high; // Return partition index
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = qs(arr, low, high); // Partition index
        quickSort(arr, low, pi - 1); // Sort left subarray
        quickSort(arr, pi + 1, high); // Sort right subarray
    }
}

int main() {
    int arr[5] = {9, 5, 1, 4, 8};
    int n = 5;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

