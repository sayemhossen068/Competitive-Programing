#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "abcdefg";  // 7 letters sequence
    for(int i = 0; i < n; i++) {
        cout << s[i % 4];
    }
    cout << endl;
    return 0;
}
