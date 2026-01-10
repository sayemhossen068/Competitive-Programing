#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    
    vector<char> a;
    
    while(n != 0){
        int rem = n % 16;
        n/=16;
        
        if(rem>=10){
            if(rem == 10){
                a.push_back('A');
            } else if(rem == 11){
                a.push_back('B');
            } else if(rem == 12){
                a.push_back('C');
            } else if(rem == 13){
                a.push_back('D');
            } else if(rem == 14){
                a.push_back('E');
            } else if(rem == 15){
                a.push_back('F');
            }
        } else {
            a.push_back(rem + '0');
        }
    }
    
    for(int i=a.size() - 1; i>=0; i--){
        cout << a[i];
    }
    cout << endl;
}
