#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int bad_even = 0;
        int bad_odd  = 0;

        for (int i = 0; i < n; ++i) {
            if ((i % 2) != (a[i] % 2)) {
                if (i % 2 == 0) ++bad_even;
                else ++bad_odd;
            }
        }

        if (bad_even == bad_odd) cout << bad_even << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}