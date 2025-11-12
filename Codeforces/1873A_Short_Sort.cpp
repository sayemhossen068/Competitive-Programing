#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    
    while(n--){
        string s;
        cin >> s;
        
        if(s == "bca" || s == "cab"){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
