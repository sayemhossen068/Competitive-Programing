#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    if (!(cin >> k >> r)) return 0;
    for (int i = 1; ; ++i) {
        int total = i * k;
        int last = total % 10;
        if (last == 0 || last == r) {
            cout << i << '\n';
            return 0;
        }
    }
}