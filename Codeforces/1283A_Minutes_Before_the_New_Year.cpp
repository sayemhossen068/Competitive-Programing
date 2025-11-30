#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;

    while(n--) {
        int a, b;
        cin >> a >> b;
        
        int output = (23 - a) *60;
        output += (60 - b);
        
        cout << output << endl;
    }
}