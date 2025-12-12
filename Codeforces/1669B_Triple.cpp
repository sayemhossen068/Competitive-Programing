#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> freq;

    for(int x : arr) {
        freq[x]++;
    }

    bool found = false;
    for(auto &p : freq) {
        if(p.second >= 3) {
            cout << p.first << endl;
            found = true;
            break;
        }
    }

    if(!found) {cout << -1 << endl;}

    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

