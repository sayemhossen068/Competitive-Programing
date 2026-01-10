#include <bits/stdc++.h>
using namespace std;
int main () {
    int x, z, sum=0, count = 0;
    cin >> x;
    while(z<=x) {
        cin >> z;
    }
    while(z>sum) {
        sum+=x;
        x++;
        count++;
    }
    cout << count << endl;
}