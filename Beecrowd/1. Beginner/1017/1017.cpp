#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int speed, time;

    cin >> time >> speed;

    cout << fixed << setprecision(3);
    cout << (speed * time) / 12.0 << endl;

    return 0;
}
