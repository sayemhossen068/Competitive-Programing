#include <iostream>
using namespace std;

int main() {
    int n, x, police = 0, crimes = 0;
    cin >> n;
    while (n--) {
        cin >> x;
        if (x == -1 && police == 0) {
            crimes++;
        }
        else if (x == -1) {
            police--;
        }
        else {
            police += x;
        }
    }
    cout << crimes << endl;
}