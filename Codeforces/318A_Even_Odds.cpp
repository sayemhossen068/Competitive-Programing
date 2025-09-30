#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;

    long long oddCount = (n + 1) / 2;

    if (x <= oddCount) {
        cout << 2 * x - 1 << endl;
    } else {
        cout << 2 * (x - oddCount) << endl;
    }

    return 0;
}