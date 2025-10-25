#include <bits/stdc++.h>
using namespace std;
 
bool check(string a, string b, string c){
    
    bool check = false;
    string total = a + b;
    
    sort(total.begin(), total.end());
    sort(c.begin(), c.end());
    
    if(total == c){
        check = true;
    }
    
    return check;
}
 
int main () {
    string a, b, c;
    cin >> a >> b >> c;
    
    bool result = check(a, b, c);
    
    if(result){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}