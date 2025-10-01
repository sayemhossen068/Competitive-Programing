#include <bits/stdc++.h>
using namespace std;

int main() {
    int L;          // row number
    char T;         // operation (S or M)
    cin >> L >> T;

    double M[12][12];   // 12x12 matrix

    // Read matrix
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    double sum = 0.0;
    for(int j = 0; j < 12; j++) {
        sum += M[L][j];   // take row L
    }

    if(T == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else if(T == 'M') {
        cout << fixed << setprecision(1) << sum / 12.0 << endl;
    }

    return 0;
}