#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        string s;
        int k;
        cin >> s >> k;

        for(int i = 0; i < s.size(); i++) {
            s[i] = s[i] - k;   // shift left
            if(s[i] < 'A') {
                s[i] = s[i] + 26; // wrap around
            }
        }

        cout << s << endl;
    }

    return 0;
}
