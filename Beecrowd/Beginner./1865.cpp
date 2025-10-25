#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string name;
        int number;
        cin >> name >> number;
        if (name == "Thor") {
            cout << "Y\n";
        } else {
            cout << "N\n";
        }
    }
    return 0;
}