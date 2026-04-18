#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        long long n, k;
        cin >> n >> k;
        
        long long x = (n+k - 1) / k;
        k*=x;
        
        cout << (k + n - 1) / n << endl;
    }
}
