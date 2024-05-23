#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input and printing array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "the given array" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    // Start ->
    vector<vector<int>> ans;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                if (sum == 0) {
                    vector<int> lis;
                    lis.push_back(arr[i]);
                    lis.push_back(arr[j]);
                    lis.push_back(arr[k]);
                    ans.push_back(lis);
                }
            }
        }
    }
    
    // Print results
    cout <<endl<< "Triplets with sum 0:" << endl;
    for (auto triplet : ans) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Done...
    return 0;
}
