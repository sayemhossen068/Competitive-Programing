#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int odd_count = 0;
        
        int arr[2*n];
        
        for(auto &x : arr){
            cin >> x;
            if(x % 2 != 0) {
                odd_count++;
            }
        }
        
        if(odd_count == n) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}
