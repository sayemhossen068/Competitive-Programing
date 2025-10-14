#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while(n--){
        int a;
        cin >> a;
        
        if(a%3) {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }
}
