#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, group=0;
    string first = "", second = "";
    cin >> n;
    while(n--)
    {
        cin >> second;
        if(first!=second) {
            group++;
            first = second;
        }
    }
    cout << group << endl;

}