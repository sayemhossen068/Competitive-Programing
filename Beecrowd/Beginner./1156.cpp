#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    float S = 0;
    int numerator = 1;
    int denominator = 1;

    for (int i = 1; i <= 20; i++) {
        S += (float)numerator / denominator;
        numerator += 2;
        denominator *= 2;
    }
    cout << fixed << setprecision(2);
    cout << S << endl;
    return 0;
}
