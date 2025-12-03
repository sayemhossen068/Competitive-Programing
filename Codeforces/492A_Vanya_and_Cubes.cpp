#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    if (!(cin >> n)) return 0;
    long long ans = 0;
    for (long long i = 1; ; ++i) {
        long long need = i * (i + 1) / 2;
        if (n < need) break;
        n -= need;
        ++ans;
    }
    cout << ans << '\n';
    return 0;
}