#include <iostream>
#include <cmath>  // for abs()

using namespace std;

int main() {
    int a, b, c, r;

    cin >> a >> b >> c;

    r = (a + b + abs(a - b)) / 2; // max between a and b
    r = (c + r + abs(r - c)) / 2; // max between c and previous max

    cout << r << " eh o maior" << endl;

    return 0;
}
