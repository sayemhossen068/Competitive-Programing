#include <bits/stdc++.h>
using namespace std;
 
int main () {
    int n;
    cin >> n;
 
    while(n--) {
        int a, b, c;
        cin >> a >> b >>c;
        
        if(c%2 == 0){
            cout << ((a > b) ? "First" : "Second") << endl;
        } else {
            cout << ((b > a) ? "Second" : "First") << endl;
        }
    }
    return 0;
}