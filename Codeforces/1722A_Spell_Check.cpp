#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        int a;
        cin >> a;
        string s;
        cin >> s;

        string x = "Timur";

        sort(s.begin(), s.end());
        sort(x.begin(), x.end());

        if(s == x) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}