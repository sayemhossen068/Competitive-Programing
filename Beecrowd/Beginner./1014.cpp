#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x;
    float y;

    cin >> x;
    cin >> y;

    cout << fixed << setprecision(3);
    cout << x / y << " km/l" << endl;

    return 0;
}
