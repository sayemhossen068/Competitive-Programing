#include <bits/stdc++.h>
using namespace std;
int main () {
    int col;
    char t;
    cin >> col >> t;
    
    double arr[12][12];
    
    for(int i=0; i<12; i++) {
        for(int j=0; j<12; j++){
            cin >> arr[i][j];
        }
    }
    
    double sum=0;
    
    for(int i=0; i<12; i++){
        sum+=arr[i][col];
    }
    
    if(t == 'S'){
        cout << fixed << setprecision(1) << sum << endl;
    } else if(t == 'M'){
        cout << fixed << setprecision(1) << sum/12 << endl;
    }
    
}
