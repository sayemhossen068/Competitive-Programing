
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k, y, count = 0;
    cin >> n >> k;
    while(n--) {
        cin >> y;
        if(5 - y >= k) {
            count++;
        }
    }
    cout << count / 3 << endl;
    return 0;
}
