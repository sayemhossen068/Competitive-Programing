#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        int a;
        cin >> a;
        if(a % 2 != 0) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}
