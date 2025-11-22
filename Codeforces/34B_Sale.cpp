#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    
    vector<int> arr(n);
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    
    int sum = 0;
    for(int i=0; i<a; i++){
        if(arr[i] < 0){
            sum += abs(arr[i]);
        }
    }
    cout << sum << endl;
}