#include <iostream>
using namespace std;

int main() {
    int num, maxValue, position;
    cin >> num;
    maxValue = num;
    position = 1;
    for (int i = 2; i <= 100; i++) {
        cin >> num;
        if (num > maxValue) {
            maxValue = num;
            position = i;
        }
    }

    cout << maxValue << endl;
    cout << position << endl;

    return 0;
}
