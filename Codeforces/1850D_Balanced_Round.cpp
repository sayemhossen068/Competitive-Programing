#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> x(n);
    for (auto &a : x) {
        cin >> a;
    }

    sort(x.begin(), x.end());

    int maxLen = 1;
    int currLen = 1;

    for (int i = 1; i < n; i++) {
        if (x[i] - x[i - 1] <= k) {
            currLen++;
        } else {
            currLen = 1;
        }
        maxLen = max(maxLen, currLen);
    }

    cout << n - maxLen << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}