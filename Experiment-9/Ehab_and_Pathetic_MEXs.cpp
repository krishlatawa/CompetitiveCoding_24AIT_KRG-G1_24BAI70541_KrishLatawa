#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> edges(n-1);
    vector<vector<int>> adj(n+1);

    for(int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        edges[i] = {u, v};
        adj[u].push_back(i);
        adj[v].push_back(i);
    }

    int special = -1;

    // Find node with degree >= 3
    for(int i = 1; i <= n; i++) {
        if(adj[i].size() >= 3) {
            special = i;
            break;
        }
    }

    vector<int> label(n-1, -1);
    int curr = 0;

    if(special != -1) {
        // Assign 0,1,2 to edges connected to special node
        for(int idx : adj[special]) {
            if(curr < 3) {
                label[idx] = curr++;
            }
        }
    }

    // Assign remaining labels
    for(int i = 0; i < n-1; i++) {
        if(label[i] == -1) {
            label[i] = curr++;
        }
    }

    // Output
    for(int i = 0; i < n-1; i++) {
        cout << label[i] << endl;
    }

    return 0;
}