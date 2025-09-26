#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 1; 
    bool danger = false;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
            if (count >= 7) {
                danger = true;
                break;
            }
        } else {
            count = 1; 
        }
    }

    if (danger) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
