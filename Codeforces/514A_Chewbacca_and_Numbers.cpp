#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        int d = s[i] - '0';
        if (i == 0 && d == 9) continue;
        if (d > 4) d = 9 - d;
        s[i] = d + '0';
    }

    cout << s;
}
