#include <bits/stdc++.h>
using namespace std;
int main () {
    int i, j, n;
    
    while(true){
        cin >> n;
        if(n==0){
            break;
        }
        
        int m[n][n];
        
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                m[i][j] = abs(i-j) + 1;
            }
        }
        
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(j==0){
                    cout << setw(3) << m[i][j];
                } else {
                    cout << setw(4) << m[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;
        
    }
    return 0;
}
