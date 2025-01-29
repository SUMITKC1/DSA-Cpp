#include <iostream>
#include <vector>
using namespace std;

int partition(int *arr, int s, int e) {
    int pivot = arr[s];  // Choose the first element as the pivot
    int left = s + 1;
    int right = e;

    while (true) {
        // Move left pointer to the right as long as arr[left] <= pivot
        while (left <= right && arr[left] <= pivot) {
            left++;
        }
        
        // Move right pointer to the left as long as arr[right] >= pivot
        while (left <= right && arr[right] >= pivot) {
            right--;
        }

        // If left pointer is less than or equal to right pointer, swap the elements
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        } else {
            break;
        }
    }

    // Place the pivot in its correct position
    int temp = arr[s];
    arr[s] = arr[right];
    arr[right] = temp;

    return right;  // Return the pivot index
}

void quicksort(int *arr, int s, int e) {
    // Base case
    if (s >= e) {
        return;
    }

    // Partitioning and recursive calls
    int p = partition(arr, s, e);
    quicksort(arr, s, p - 1);  // Left part
    quicksort(arr, p + 1, e);  // Right part
}

int main() {
    int arr[10] = {4, 1, 3, 3, 6, 8, 2, 2, 11, 14};
    quicksort(arr, 0, 9);

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
