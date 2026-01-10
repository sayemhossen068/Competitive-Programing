#include <bits/stdc++.h>
using namespace std;

int main() {
    char s;
    cin >> s;
    
    double arr[12][12];
    
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> arr[i][j];
        }
    }
    
    double sum = 0;
    int n=5, m=6;
    
    for(int i=7; i<12; i++){
        for(int j=n; j<=m; j++){
            sum += arr[i][j];
        }
        n--;
        m++;
    }
    
    cout << fixed << setprecision(1);
    cout << (s == 'S'?sum:sum/30) << endl;
    
    return 0;
}
