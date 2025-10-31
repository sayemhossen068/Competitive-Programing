#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long current = 1, total = 0;
    for (int i = 0; i < m; i++) {
        long long next;
        cin >> next;
        if (next >= current)
            total += next - current;
        else
            total += (n - current) + next;
        current = next;
    }

    cout << total << endl;
    return 0;
}