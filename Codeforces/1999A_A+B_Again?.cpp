#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n, x, sum;
    cin >> n;
    
    while (n--){
        cin >> x;
        sum = (x/10)+(x%10);
        cout << sum << "\n";
        
    }
}
