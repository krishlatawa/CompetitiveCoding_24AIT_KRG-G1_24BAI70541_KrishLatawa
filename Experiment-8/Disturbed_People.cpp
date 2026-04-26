#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int count = 0;

    for(int i = 1; i < n - 1; i++) {
        if(a[i-1] == 1 && a[i] == 0 && a[i+1] == 1) {
            count++;
            a[i+1] = 0; // turn off right one
            i++; // skip next to avoid overlap
        }
    }

    cout << count << endl;
    return 0;
}