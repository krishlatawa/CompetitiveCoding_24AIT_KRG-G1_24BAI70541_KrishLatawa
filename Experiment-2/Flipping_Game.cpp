#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int totalOnes = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) totalOnes++;
    }

    // Apply Kadane
    int maxGain = INT_MIN, curr = 0;

    for(int i = 0; i < n; i++) {
        int val = (a[i] == 0) ? 1 : -1;

        curr = max(val, curr + val);
        maxGain = max(maxGain, curr);
    }

    // Edge case: all 1s
    if(maxGain <= 0) {
        cout << n - 1 << endl;
    } else {
        cout << totalOnes + maxGain << endl;
    }

    return 0;
}