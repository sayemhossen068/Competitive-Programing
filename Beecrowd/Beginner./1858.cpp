#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int minVal = v[0];
    int pos = 1;

    for (int i = 1; i < n; i++) {
        if (v[i] < minVal) {
            minVal = v[i];
            pos = i + 1;
        }
    }

    cout << pos << endl;
    return 0;
}