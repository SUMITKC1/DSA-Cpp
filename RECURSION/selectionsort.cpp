#include <iostream>
#include <vector> // Include the vector header

using namespace std; // Use the std namespace for vector and cout

void rselsort(vector<int> &arr, int len) {
    // Base case
    if (len == 0 || len == 1) {
        return;
    }

    // Find the smallest element and its index in the current subarray
    int minIndex = 0;
    for (int i = 1; i < len; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Swap the smallest element with the first element
    if (minIndex != 0) {
        int temp = arr[0];
        arr[0] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Recursive call for the remaining subarray
    vector<int> subArray(arr.begin() + 1, arr.end());
    rselsort(subArray, len - 1);

    // Update the original vector with sorted subarray
    for (int i = 1; i < len; i++) {
        arr[i] = subArray[i - 1];
    }
}

int main() {
    vector<int> arr = {4, 2, 1, 6, 9};
    int len = arr.size();

    // Sort the array
    rselsort(arr, len);

    // Print the sorted array
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
