#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> freq;

    for (int i = 0; i < n - 1; i++) {
        string two = s.substr(i, 2);
        freq[two]++;
    }

    string ans;
    int mx = 0;

    for (auto &p : freq) {
        if (p.second > mx) {
            mx = p.second;
            ans = p.first;
        }
    }

    cout << ans << endl;
    return 0;
}