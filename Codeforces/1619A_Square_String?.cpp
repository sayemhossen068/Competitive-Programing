#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    while(a--) {

        string n;
        cin >> n;
        int s = n.size();

        if (s % 2) {
            cout << "NO"<<endl;
            continue;
        }

        cout << (n.substr(0, s/2) == n.substr(s/2) ? "YES" : "NO") << endl;
    }
}

