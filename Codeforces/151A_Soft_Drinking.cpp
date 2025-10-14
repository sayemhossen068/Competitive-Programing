#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    vector<int> drink(3);
    
    drink[0] = (k*l) / nl;
    drink[1] = c * d;
    drink[2] = p / np;
    
    sort(drink.begin(), drink.end());
    
    cout << drink[0]/n << endl;
}
