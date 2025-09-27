#include <bits/stdc++.h>
using namespace std;
int main () {
    string s;
    set<char>desicion;
    
    cin >> s;
    for(int i=0; i<s.size(); i++){
        desicion.insert(s[i]);
    }
    
    if(desicion.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
}
