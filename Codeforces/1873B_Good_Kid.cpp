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
    int n, output = 1;
    cin >> n;
    vector<int> arr(n);
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    arr[0]+=1;
    
    for(int i=0; i<n; i++){
        output*=arr[i];
    }
    
    cout << output << endl;
}