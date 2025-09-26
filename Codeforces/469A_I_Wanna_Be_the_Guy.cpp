#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, p, lp;
    cin >> n >> p;
    set<int>level;
    for(int i=0; i<p; i++){
        cin >> lp;
        level.insert(lp);
    }
    
    int q, lq;
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> lq;
        level.insert(lq);
    }
    
    if(level.size() == n){
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    
}
