#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, count = 0;
    cin >> n;
    
    for(int i=1; i<=5; i++) {
        int a;
        cin >> a;
        
        if(n==a){
            count++;
        }
    }
    
    cout << count << endl;
}
