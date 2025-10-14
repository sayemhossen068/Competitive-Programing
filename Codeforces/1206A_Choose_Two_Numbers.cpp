#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, a = 0, b = 0, x;
    
    cin >> n;
    while (n--) {
        cin >> x;
        a = max(a, x);
    }
    
    cin >> m;
    while (m--) {
        cin >> x;
        b = max(b, x);
    }
    
    cout << a << " " << b;
    
    return 0;
}
