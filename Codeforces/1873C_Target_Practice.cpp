#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> a(10);
        for (int i = 0; i < 10; i++) {
            cin >> a[i];
        }

        int score = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (a[i][j] == 'X') {
                    int layer = min({i, j, 9 - i, 9 - j});
                    score += (layer + 1);
                }
            }
        }

        cout << score << endl;
    }
    return 0;
}