#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    string a = "codeforces";
    while(n--){
        int count = 0;
        string s;
        cin >> s;
        
        for(int i=0; i<a.size(); i++){
            if(a[i] != s[i]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
