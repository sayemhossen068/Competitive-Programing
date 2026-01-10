#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, x, y;
    cin >> n;
    while(n--) {
        cin >> x >> y;
        int gCd = gcd(x, y);
        cout << gCd << endl;
    }
    return 0;
}