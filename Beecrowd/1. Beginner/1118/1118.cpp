#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double score, sum;
    int validCount, option;

    while (true) {
        sum = 0.0;
        validCount = 0;

        // Read two valid scores
        while (validCount < 2) {
            cin >> score;
            if (score >= 0.0 && score <= 10.0) {
                sum += score;
                validCount++;
            } else {
                cout << "nota invalida" << endl;
            }
        }

        cout << fixed << setprecision(2);
        cout << "media = " << (sum / 2.0) << endl;
        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> option;
        } while (option != 1 && option != 2);
        if (option == 2) break;
    }

    return 0;
}
