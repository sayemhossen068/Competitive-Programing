#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;

        int m[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                m[i][j] = pow(2, i + j);
            }
        }

        int w = to_string(m[n - 1][n - 1]).size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == 0)
                    cout << setw(w) << m[i][j];
                else
                    cout << " " << setw(w) << m[i][j];
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
