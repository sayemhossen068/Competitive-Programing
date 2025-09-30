#include <iostream>
using namespace std;

int main() {
    int n, num1 = 0, num2 = 1, num3;
    cin >> n;

    for(int i = 0; i < n; i++) {
        if(i == 0) {
            cout << num1;
        } else {
            cout << " " << num1;
        }
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }

    cout << endl;
    return 0;
}