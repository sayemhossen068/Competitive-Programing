#include <iostream>
using namespace std;

int main() {
    int A, N;
    cin >> A;
    while (cin >> N && N <= 0);

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += (A + i);
    }

    cout << sum << "\n";
    return 0;
}
