#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    double x, y, z;
    cin >> x;

    if(x <= 400) {
        z = x + (x * 0.15);
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << z << endl;
        y = (z - x);
        cout << "Reajuste ganho: " << y << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    if(x > 400 && x <= 800) {
        z = x + (x * 0.12);
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << z << endl;
        y = (z - x);
        cout << "Reajuste ganho: " << y << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    if(x > 800 && x <= 1200) {
        z = x + (x * 0.10);
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << z << endl;
        y = (z - x);
        cout << "Reajuste ganho: " << y << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    if(x > 1200 && x <= 2000) {
        z = x + (x * 0.07);
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << z << endl;
        y = (z - x);
        cout << "Reajuste ganho: " << y << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    if(x > 2000) {
        z = x + (x * 0.04);
        cout << fixed << setprecision(2);
        cout << "Novo salario: " << z << endl;
        y = (z - x);
        cout << "Reajuste ganho: " << y << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}
