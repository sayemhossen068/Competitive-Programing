#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
        
    vector<int>arr(n);
        
    for(auto &x : arr) {
        cin >> x;
    }
        
    sort(arr.rbegin(), arr.rend());
        
    for(int i=0; i< n-1; i++) {
        if(arr[i] == arr[i+1]) {
            cout << "-1" << endl;
            return;
        }
    }
        
    for(auto x : arr) {
        cout << x << " ";
    }
    cout << endl;
}


int main() {
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
}
