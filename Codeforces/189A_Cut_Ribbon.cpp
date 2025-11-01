#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int maxPieces = 0;
    for (int i = 0; i * a <= n; i++) {
        for (int j = 0; j * b <= n; j++) {
            int remaining = n - (i * a + j * b);
            if (remaining >= 0 && remaining % c == 0) {
                int k = remaining / c;
                maxPieces = max(maxPieces, i + j + k);
            }
        }
    }

    cout << maxPieces << endl;
    return 0;
}