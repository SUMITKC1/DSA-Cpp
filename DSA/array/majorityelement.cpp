#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

int main() {
    int arr[8] = {1, 2, 1, 3, 3,3, 5, 5};
    int n = 8;
    cout << "the given array" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int threshold = floor(n / 3);
    bool found = false;

    cout << "the number(s) which have frequency more than n/3 are: ";
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second > threshold) {
            cout << it->first << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "None";
    }
    cout << endl;

    cout << "the final array is:" << endl << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) {
            cout << ",";
        }
    }
    cout << "]";

    return 0;
}
