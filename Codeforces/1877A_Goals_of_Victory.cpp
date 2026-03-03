#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    
    while(n--) {
        int x; cin >> x;
        vector<int> a(x);
        
        for(int i=0; i<x-1; i++) {
            cin >> a[i];
        }
        
        int sum = 0;
        
        for(auto x : a){
            sum+=x;
        }
        
        cout << (sum * -1) << endl;
    }
    
    return 0;
}
