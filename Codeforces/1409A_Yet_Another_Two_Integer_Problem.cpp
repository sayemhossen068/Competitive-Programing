#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    while(n--){
    int a, b;
    cin >> a >> b;
    
    int output = (abs(a-b) + 9) / 10;
    
    cout << output << endl;
    }
}
