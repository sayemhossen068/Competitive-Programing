#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long a, b, n;
        cin >> a >> b >> n;

        int ops = 0;
        while (a <= n && b <= n) {
            if (a < b)
                a += b;
            else
                b += a;
            ops++;
        }
        cout << ops << "\n";
    }
    return 0;
}