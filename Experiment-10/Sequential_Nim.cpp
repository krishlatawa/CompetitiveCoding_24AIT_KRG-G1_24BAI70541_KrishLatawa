#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int k = 0;

        // count consecutive 1s from start
        while(k < n && a[k] == 1) k++;

        if(k == n) {
            // all are 1
            if(n % 2 == 1)
                cout << "First\n";
            else
                cout << "Second\n";
        } else {
            if(k % 2 == 0)
                cout << "First\n";
            else
                cout << "Second\n";
        }
    }

    return 0;
}