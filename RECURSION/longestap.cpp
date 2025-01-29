#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int solve(vector<int>& a) {
    int n = a.size();
    if (n <= 2) return n; // Any sequence of length <= 2 is an AP.

    vector<unordered_map<int, int>> dp(n); // dp[j][d] stores the length of LAP ending at j with difference d.
    int ans = 2; // Minimum LAP length is 2.

    for (int j = 1; j < n; j++) {
        for (int i = 0; i < j; i++) {
            int diff = a[j] - a[i]; // Calculate the difference
            // If there's an AP ending at i with this difference, extend it
            dp[j][diff] = dp[i].count(diff) ? dp[i][diff] + 1 : 2;
            ans = max(ans, dp[j][diff]); // Update the maximum length
        }
    }

    return ans;
}

int main() {
    vector<int> a = {1, 7, 10, 13, 14, 19};
    cout << solve(a) << endl;
    return 0;
}
