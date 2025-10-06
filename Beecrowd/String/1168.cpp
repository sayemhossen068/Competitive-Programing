#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    
    unordered_map<char, int> led = {
        {'1', 2},
        {'2', 5},
        {'3', 5},
        {'4', 4},
        {'5', 5},
        {'6', 6},
        {'7', 3},
        {'8', 7},
        {'9', 6},
        {'0', 6}
    };
    
    while(n--){
        string s;
        cin >> s;
        int count = 0;
        for(int i=0; i<s.size(); i++){
            count += led[s[i]];
        }
        cout << count << " leds" << endl;
    }
}
