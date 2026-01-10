#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int pa, pb;
        double ga, gb;
        cin >> pa >> pb >> ga >> gb;

        int years = 0;
        while(pa <= pb && years <= 100) {
            pa += (pa * ga) / 100;
            pb += (pb * gb) / 100;
            years++;
        }

        if(years > 100) {
            cout << "Mais de 1 seculo." << endl;
        } else {
            cout << years << " anos." << endl;
        }
    }
    return 0;
}