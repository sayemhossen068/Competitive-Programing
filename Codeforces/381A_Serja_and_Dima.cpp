#include<bits/stdc++.h>
using namespace std;
 
int main () {
    int n;
    cin >> n;
    
    vector<int> a(n);
    
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    int s=0, d=0;
    int left=0, right = n - 1;
    
    bool turn = true;
    
    while (left <= right){
        if(a[left] > a[right]){
            if(turn){
                s += a[left];
            } else {
                d += a[left];
            }
            left++;
        } else {
            if(turn){
                s += a[right];
            } else {
                d += a[right];
            }
            right--;
        }
        turn = !turn;
    }
    
    cout << s << " " << d << endl;
}