#include <bits/stdc++.h>
using namespace std;
int main () {
    int x,y,z;
    cin >> x >> y >> z;
    
    int a=x, b=y, c=z;
    
    if (a>b) swap(a, b);
    if (a>c) swap(a, c);
    if (b>c) swap(b, c);
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    cout << endl;
    
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    
    return 0;
    
}
