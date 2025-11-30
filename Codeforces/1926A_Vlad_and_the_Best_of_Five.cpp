#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;

    while(n--) {
        string s;
        cin >> s;
        int countA = 0, countB = 0;
        
        for(int i=0; i<5; i++){
            (s[i] == 'A')? countA++ : countB++;
        }
        cout << ((countA > countB)? "A" : "B") << endl;
    }
    return 0;
}