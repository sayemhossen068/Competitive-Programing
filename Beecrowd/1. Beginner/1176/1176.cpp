#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n;

    long long fib[61];
    fib[0]=0;
    fib[1]=1;

    for(int i=2; i<=60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    while(n--){
    cin >> t;
    cout << "Fib(" << t << ") = " << fib[t] << endl;
    }
}