#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int sum = 0;
    int count = 0;
    while (true) {
        getline(cin, s);
        if (s == "caw caw") {
            cout << sum << endl;
            sum = 0;
            count++;
            if (count == 3) break;
        } else {
            if (s[0] == '*') sum += 4;
            if (s[1] == '*') sum += 2;
            if (s[2] == '*') sum += 1;
        }
    }

    return 0;
}