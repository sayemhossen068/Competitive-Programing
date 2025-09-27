#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salary;
    cin >> salary;

    if (salary <= 2000.00) {
        cout << "Isento" << endl;
    } else if (salary > 2000.00 && salary <= 3000.00) {
        double tax = (salary - 2000.00) * 0.08;
        cout << "R$ " << fixed << setprecision(2) << tax << endl;
    } else if (salary > 3000.00 && salary <= 4500.00) {
        double tax = (1000.00 * 0.08) + ((salary - 3000.00) * 0.18);
        cout << "R$ " << fixed << setprecision(2) << tax << endl;
    } else if (salary > 4500.00) {
        double tax = (1000.00 * 0.08) + (1500.00 * 0.18) + ((salary - 4500.00) * 0.28);
        cout << "R$ " << fixed << setprecision(2) << tax << endl;
    }

    return 0;
}
