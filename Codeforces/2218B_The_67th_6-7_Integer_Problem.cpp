#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int a[7];
        int sum = 0, mx = -1000;
        
        for(int i = 0; i < 7; i++) {
            cin >> a[i];
            sum += a[i];
            mx = max(mx, a[i]);
        }
        
        cout << 2 * mx - sum << endl;
    }
    
    return 0;
}
