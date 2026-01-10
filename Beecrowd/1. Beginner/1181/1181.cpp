#include <bits/stdc++.h>
using namespace std;

int main() {
    int L;
    char T;
    cin >> L >> T;

    double M[12][12];

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> M[i][j];
        }
    }

    double sum = 0.0;
    for(int j = 0; j < 12; j++) {
        sum += M[L][j];
    }

    if(T == 'S') {
        cout << fixed << setprecision(1) << sum << endl;
    } else if(T == 'M') {
        cout << fixed << setprecision(1) << sum / 12.0 << endl;
    }

    return 0;
}