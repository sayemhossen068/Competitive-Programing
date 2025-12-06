#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;

    while(n--) {
        int a;
        cin >> a;
        string s;
        cin >> s;
        int ans = 0, bal = 0;
        for(int i=0; i<a; i++){
            if(s[i] =='('){
                bal++;
            } else {
                bal--;
                if(bal < 0){
                    bal = 0;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}