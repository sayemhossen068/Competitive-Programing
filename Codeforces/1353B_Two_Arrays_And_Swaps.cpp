#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
        
    vector<int> a(n);
    for(auto &x : a){
        cin >> x;
    }

    vector<int> b(n);
    for(auto &y : b){
        cin >> y;
    }

    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    int output = 0;

    for(int i=0; i<n; i++){
        if(i < k){
            output += max(a[i], b[i]);
        } else{
            output += a[i];
        }
    }

    cout << output << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
