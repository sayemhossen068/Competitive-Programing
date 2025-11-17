#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m = 0, c = 0;

    while(n--) {
        int mi, ci;
        cin >> mi >> ci;

        if(mi > ci) m++;
        else if(mi < ci) c++;
    }

    if(m > c) cout << "Mishka";
    else if(m < c) cout << "Chris";
    else cout << "Friendship is magic!^^";

    return 0;
}