#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    double a, b, c;

    cin >> a >> b >> c;

    double x = ((b*b) - (4 * a * c));

    if(x < 0 || (a == 0)) {
        cout << "Impossivel calcular" << endl;
    }

    else {
        double R1 = ((-b + sqrt(x)) / (2 * a));
        double R2 = ((-b - sqrt(x)) / (2 * a));

        cout << fixed << setprecision(5);
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }
return 0;
}
