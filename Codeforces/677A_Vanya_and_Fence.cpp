#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, h,x, sum1 = 0, sum2=0, sum;
    
    cin >> n >> h;
    
    for(int i=1; i<=n; i++) {
        cin >> x;
        if(x>h) {
            sum1 += 2;
        }
        else {
            sum2 += 1;
        }
    }
    sum = sum1 + sum2;
    
    cout << sum << endl;
}
