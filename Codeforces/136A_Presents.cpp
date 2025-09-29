#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, v;
    vector<int>gift(101);
    cin >> n;
    for(int i = 1; i<=n; i++) {
        cin >> v;
        gift[v] = i;
    }
    for(int i = 1; i<=n; i++) {
        cout << gift[i] << " ";
    }

    return 0;
}