#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<long> v;
    for(long p = 0; v.size() < 1007; p++){
        if(p % 3 == 0){
            continue;
        }
        if(p % 10 == 3){
            continue;
        }
        v.push_back(p);
    }
    long t; 
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        cout << v[n - 1] << endl;
    }
}
