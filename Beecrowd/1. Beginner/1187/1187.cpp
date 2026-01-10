#include <bits/stdc++.h>
using namespace std;

int main() {
    char t;
    cin >> t;
    
    double arr[12][12];
    
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            cin >> arr[i][j];
        }
    }
    
    double sum=0;
    
    for(int i=0; i<5; i++){
        for(int j=i + 1; j<11 - i; j++){
                sum += arr[i][j];
        }
    }
    
    cout << fixed << setprecision(1) << (t=='S'?sum:sum/30) << endl;
    
}
