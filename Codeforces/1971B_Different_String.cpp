#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        bool same = true;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[0]) {
                same = false;
                break;
            }
        }

        if (same) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            string t = s;
            sort(t.begin(), t.end());
            if (t == s)
                reverse(t.begin(), t.end());
            cout << t << "\n";
        }
    }
    return 0;
}