#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    getchar();
    while(n--) {
        string a, b;
        getline(cin, a);
        b = a;
        a[0] = b[4];
        a[4] = b[0];
        cout << a << endl;
    }
    return 0;
}