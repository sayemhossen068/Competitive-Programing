#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string team, t1, t2;
    int c1 = 0, c2 = 0;
 
    cin >> t1;
    c1 = 1;
 
    for(int i = 1; i < n; i++) {
        cin >> team;
        if(team == t1) {
            c1++;
        } else {
            t2 = team;
            c2++;
        }
    }
 
    if(c1 > c2){
        cout << t1;
    } else {
        cout << t2;
    }
    return 0;
}
