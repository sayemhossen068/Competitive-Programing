#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    while (true) {
        cin >> x;
        if (x == 0) break;

        int sum = 0;
        int count = 0;
        int i = x;

        while (count < 5) {
            if (i % 2 == 0) {
                sum += i;
                count++;
            }
            i++;
        }

        cout << sum << endl;
    }
    return 0;
}