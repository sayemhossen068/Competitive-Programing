#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;

    while (true) {
        cin >> a;
        if (a == 0){
            break;
        }
        cin >> b >> c;

        int land_side = sqrt((a * b * 100) / c);
        cout << land_side << endl;
    }

    return 0;
}
