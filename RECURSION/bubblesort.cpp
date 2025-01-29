#include <iostream>
#include <vector>
using namespace std;

void rbubsort(int *nums, int len) {
    // Base case
    if (len == 1||len==0) {
        return;
    }
    
    // Perform a single pass of bubble sort
    for (int i = 0; i < len - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            // Swap adjacent elements
            int temp = nums[i];
            nums[i] = nums[i + 1];
            nums[i + 1] = temp;
        }
    }
    
    // Recursive call for the remaining unsorted part
    rbubsort(nums, len - 1);
}

int main() {
    int arr[5] = {4, 2, 1, 6, 9};
    int len = 5;

    // Sort the array
    rbubsort(arr, len);

    // Print the sorted array
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
