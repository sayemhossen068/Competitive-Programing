#include<iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        string x;
        cin >> x;
        if(x.length() > 10) {
        cout << x[0] << x.length() - 2 << x[x.length() - 1] << endl;
        } else {
        cout << x << endl;
        }
    }
    
    return 0;
}
