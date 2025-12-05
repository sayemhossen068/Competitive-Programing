#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;

    while(n--) {
        int a;
        cin >> a;
        
        vector<int> arr(a);
        
        for(int i=0; i<a; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int low=arr[0], ans = 0;
        
        for(int i=0; i<a; i++){
            ans = ans + (arr[i] - low);
        }
        
        cout << ans << endl;
    }
    return 0;
}