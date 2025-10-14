#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> position(n);
 
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < 4; j++) {
                if (s[j] == '#') {
                    position[i] = j + 1;
                    break;
                }
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            cout << position[i] << " ";
        }
        cout << endl;
    }
 
    return 0;
}
