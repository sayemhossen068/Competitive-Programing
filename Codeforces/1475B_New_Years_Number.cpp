#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int rem2021 = n % 2020;
        int rem2020 = n / 2020 - rem2021;

        if (rem2020 >= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}