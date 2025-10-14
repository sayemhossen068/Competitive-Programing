#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string x = "codeforces";

    while (t--) {
        char a;
        cin >> a;

        bool found = false;
        for (int i = 0; i < x.size(); i++) {
            if (a == x[i]) {
                found = true;
                break;
            }
        }

        if (found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
