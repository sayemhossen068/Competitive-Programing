#include <bits/stdc++.h>
using namespace std;
void solve();

int main () {
    int n;
    cin >> n;

    while(n--) {
        solve();
    }
    return 0;
}

void solve(){
    int n, count = 0;
    cin >> n;
    vector<int> arr(n);
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<n-1; i++){
        if(arr[i] < arr[i + 1]){
            count++;
        }
    }
    if(count == (n-1)){cout << "YES" << endl;}
    else{cout << "NO" << endl;}
}