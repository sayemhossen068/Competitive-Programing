#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, m, a;
    if (!(cin >> n >> m >> a));
    long long nx = (n + a - 1) / a;
    long long mx = (m + a - 1) / a;
    cout << (nx * mx) << '\n';
    return 0;
}
