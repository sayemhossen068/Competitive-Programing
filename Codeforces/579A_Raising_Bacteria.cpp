#include <iostream>
using namespace std;

int main() {
    const int N = 2;

    long x;
    cin >> x;

    int ans = 0;
    while (x > 0) {
        ans += x % N;
        x /= N;
    }

    cout << ans << endl;
    return 0;
}
