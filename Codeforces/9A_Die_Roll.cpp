#include <bits/stdc++.h>
using namespace std;

int main () {
    int a , b;
    cin >> a >> b;
    
    int x = max(a, b);
    
    int count = 6 - x + 1;
    int y = gcd(count, 6);
    
    cout << (count / y) << "/" << (6/y) << endl;
}
