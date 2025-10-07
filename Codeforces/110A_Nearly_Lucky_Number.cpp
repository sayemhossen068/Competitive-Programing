#include <bits/stdc++.h>
using namespace std;
int main () {
    string n;
    getline(cin, n);
    
    int x=0;
    for(int i=0; i<n.size(); i++) {
        if(n[i] == '4' || n[i] == '7') {
            x++;
        }
    }
    if(x == 4 || x == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
