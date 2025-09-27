#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        long long zeros = 0;
        while (N > 0) {
            N /= 5;
            zeros += N;
        }
        cout << zeros << "\n";
    }
    return 0;
}
