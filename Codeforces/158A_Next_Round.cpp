#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[55];
    for (int i = 0; i < n; i++) cin >> a[i];

    int cutoff = a[k - 1], count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= cutoff && a[i] > 0) count++;
    }

    cout << count;
    return 0;
}
