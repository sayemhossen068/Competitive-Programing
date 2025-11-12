#include <bits/stdc++.h>
using namespace std;

int spaceCount(const vector<int>& a) {
    int cur = 0, best = 0;
    for (int v : a) {
        if (v == 0) {
            ++cur;
            if (cur > best) best = cur;
        } else {
            cur = 0;
        }
    }
    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        vector<int> arr(t);
        for (int i = 0; i < t; ++i) cin >> arr[i];

        int result = spaceCount(arr);
        cout << result << endl;;
    }
    return 0;
}
