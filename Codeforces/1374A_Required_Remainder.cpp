#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;

    while(t--) {
        long x, y, n;
        cin >> x >> y >> n;

        long m = (n-y)/x;
        long k = (x*m) + y;

        cout << k << endl;
    }
}