#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, present = 0, maxcapacity = 0, in = 0, out = 0;
    cin >> n;
    for(int i =1; i<=n; i++){
        cin >> out >> in;
        present += in - out;
        
        if(present > maxcapacity) {
            maxcapacity = present;
        }
    }
    cout << maxcapacity << endl;
}
