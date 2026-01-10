#include <bits/stdc++.h>
using namespace std;
int main () {
    int i, j, n;
    
    while(cin >> n){
        
        int m[n][n];
        int k=n-1;
        
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(j == k){
                    m[i][j]=2;
                } else if(i==j){
                    m[i][j] = 1;
                } else {
                    m[i][j]=3;
                }
            }
            k--;
        }
        
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                cout << m[i][j];
            }
            cout << endl;
        }
        
    }
    return 0;
}
