#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, p;
    bool hard = false;
    cin >> n;
    while (n--) {
        cin >> p;
        if (p == 1){
            hard = true;
        }
    }
    
    if(hard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }
}
