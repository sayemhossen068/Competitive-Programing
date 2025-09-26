#include<bits/stdc++.h>
using namespace std;
int main () {
    string x;
    
    cin >> x;
    
    set<char> uniqueChars(x.begin(), x.end());
    int size = uniqueChars.size();
    
    if(size % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}
