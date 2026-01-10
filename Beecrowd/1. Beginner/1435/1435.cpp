#include<bits/stdc++.h>
using namespace std;
int value(int n, int i, int j){
    int a, b, c, d;
    a = i;
    b = j;
    c = n - i - 1;
    d = n - j - 1;
    if((a<=b) && (a<=c) && (a<=d)){
        return a+1;
    } else if((b<=a) && (b<=c) && (b<=d)){
        return b+1;
    } else if((c<=a) && (c<=b) && (c<=d)){
        return c+1;
    } else {
        return d+1;
    }
}

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
                m[i][j] = value(n, i, j);
            }
        }
        
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                if(j == 0){
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
