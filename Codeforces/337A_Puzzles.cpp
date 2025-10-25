#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> pic(m);

    for (int i = 0; i < m; i++) {
        cin >> pic[i];
    }

    sort(pic.begin(), pic.end());

    int minDiff = INT_MAX;

    for (int i = 0; i + n - 1 < m; i++) {
        int diff = pic[i + n - 1] - pic[i];
        minDiff = min(minDiff, diff);
    }

    cout << minDiff << endl;
    return 0;
}