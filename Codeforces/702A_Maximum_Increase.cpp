#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> arr(n);
    for(auto &x : arr){
        cin >> x;
    }

    int current = 1;
    int output = 1;

    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]){
            current++;
        } else {
            current = 1;
        }
        output = max(output, current);
    }

    cout << output << endl;
}
