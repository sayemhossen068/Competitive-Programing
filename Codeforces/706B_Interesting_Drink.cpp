#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int prices[n];
    for (int i = 0; i < n; i++) cin >> prices[i];

    sort(prices, prices + n);

    int q;
    cin >> q;
    while (q--) {
        int money;
        cin >> money;
        int count = upper_bound(prices, prices + n, money) - prices;
        cout << count << endl;
    }

    return 0;
}