#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, x, i;
    float sum=0, avg;
    cin >> n;
    
    for(i=1; i<=n; i++) {
        cin >> x;
        sum += x;
    }
    
    avg=sum/n;
    cout << avg << endl;
    
    return 0;
}
