#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        string s;
        cin >> s;
        
        int sum=0;
        sum = (s[0] - '0') + (s[2] - '0');
        
        cout << sum << endl;
    }

}
