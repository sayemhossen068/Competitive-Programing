#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int q = a / b;
    int r = a % b;

    if (r < 0) {
        if (b > 0) {
            q -= 1;
            r += b;
        } else {
            q += 1;
            r -= b;
        }
    }

    cout << q << " " << r << endl;
    return 0;
}