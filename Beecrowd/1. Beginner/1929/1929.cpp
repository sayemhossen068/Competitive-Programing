#include <iostream>
#include <algorithm>
using namespace std;

bool canFormTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if (canFormTriangle(a, b, c) ||
        canFormTriangle(a, b, d) ||
        canFormTriangle(a, c, d) ||
        canFormTriangle(b, c, d)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
    
    return 0;
}