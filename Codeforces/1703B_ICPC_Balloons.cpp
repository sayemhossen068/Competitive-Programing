#include <bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        set<char> k;
        int count =0;
        for(int i=0; i<n; i++){
            
            char s;
            cin >> s;
            count++;
            
            k.insert(s);
        }
        int output =0;
        int output1 = (k.size() * 2);
        int output2 = count - k.size();
        
        cout << output1+output2 << endl;
    }
}