#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int loop_limit = s.size() - 1;

    set<char> distinct;
    for(int i=1; i<loop_limit; i+=3) {
        distinct.insert(s[i]);
    }
    
    cout << distinct.size() << endl;
}