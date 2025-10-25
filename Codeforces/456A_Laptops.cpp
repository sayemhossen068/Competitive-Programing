#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int x, y;
    bool happy = false;
 
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x != y) {
            happy = true;
        }
    }
 
    if (happy)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";
 
    return 0;
}