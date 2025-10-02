#include <bits/stdc++.h>
using namespace std;
int main () {

    int n;
    cin >> n;

    string s;
    cin >> s;

    set<char> check;
    for(int i=0; i<n; i++) {
        s[i] = tolower(s[i]);
        check.insert(s[i]);
    }

    if(check.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}