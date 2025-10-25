#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, first;
    cin >> n >> first;
    
    int max=first, min=first, count=0;
    
    for(int i=1; i<n; i++) {
        int a;
        cin >> a;
        
        if(a > max){
            max=a;
            count++;
        } else if(a < min){
            min = a;
            count ++;
        }
    }
    
    cout << count << endl;
}