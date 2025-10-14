#include <bits/stdc++.h>
using namespace std;
int main () {
    int x;
    cin >> x;
    
    while(x--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        vector<int> s = {a, b, c, d};
        
        int count = 0;
        for(int i=0; i<s.size(); i++){
            if(a < s[i]){
                count++;
            }
        }
        
        cout << count << endl;
    }
}
