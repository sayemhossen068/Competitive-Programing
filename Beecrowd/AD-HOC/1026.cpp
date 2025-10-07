#include <iostream>
using namespace std;

int main() {
    unsigned long long a, b;
    while (cin >> a >> b) {   // keeps reading until EOF
        cout << (a ^ b) << endl;  // XOR operation
    }
    return 0;
}
