#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        
        int rev1 = 0, rev2 = 0, rev3 = 0;
        int rem1, rem2, rem3;

        while(a != 0) {
            rem1 = a % 10;
            rev1 = rev1 * 10 + rem1;
            a /= 10;
        }
        while(b != 0) {
            rem2 = b % 10;
            rev2 = rev2 * 10 + rem2;
            b /= 10;
        }
        int sum = rev1 + rev2;
        
        while(sum != 0) {
            rem3 = sum % 10;
            rev3 = rev3 * 10 + rem3;
            sum /= 10;
        }

        cout << rev3 << endl;
    }

    return 0;
}
