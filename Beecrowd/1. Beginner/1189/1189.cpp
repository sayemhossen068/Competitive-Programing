#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char op;
    cin >> op;

    double mat[12][12];
    double sum = 0.0;
    int count = 0;

    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> mat[i][j];
        }
    }

    
    for (int i = 1; i <= 10; i++) {
        if (i <= 5) {
            for (int j = 0; j < i; j++) {
                sum += mat[i][j];
                count++;
            }
        } else {
            
            for (int j = 0; j < 11 - i; j++) {
                sum += mat[i][j];
                count++;
            }
        }
    }

    if (op == 'S')
        cout << fixed << setprecision(1) << sum << endl;
    else if (op == 'M')
        cout << fixed << setprecision(1) << (sum / count) << endl;

    return 0;
}
