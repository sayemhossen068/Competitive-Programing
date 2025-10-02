#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, a, b;
    cin >> n;
 
    while(n--) {
        int count = 0;
        cin >> a >> b;
        if(a%b == 0) {
            cout << "0" << endl;
        } else {
            cout << (b - (a%b)) << endl;
        }
    }
    
    return 0;
}