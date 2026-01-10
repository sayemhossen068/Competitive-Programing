#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    double fixedSalary, sales;

    cin >> name >> fixedSalary >> sales;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << fixedSalary + sales * 0.15 << endl;

    return 0;
}
