#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k, total = 0, solve = 0;
    cin >> n >> k;

    for(int i=1; i<=n; i++) {
        total += 5*i;
        if(total <= 240-k) {
            solve++;
        } else {
            break;
        }
    }
    cout << solve << endl;
    return 0;
}