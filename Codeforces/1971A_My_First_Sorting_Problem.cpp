#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    while(n--) {
        vector<int> arr(2);
        cin >> arr[0] >> arr[1];
        
        sort(arr.begin(), arr.end());
        
        for(auto x : arr) cout << x << " ";
        
        cout << endl;
    }
    return 0;
}