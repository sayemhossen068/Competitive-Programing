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
            for (int j = 12 - i; j < 12; j++) {
                sum += mat[i][j];
                count++;
            }
        } else {
            for (int j = i + 1; j < 12; j++) {
                sum += mat[i][j];
                count++;
            }
        }
    }
    
    cout << fixed << setprecision(1);
    if (op == 'S')
        cout << sum << endl;
    else
        cout << (sum / count) << endl;

    return 0;
}
