#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    
    while(cin >> n && n!=0) {
        
        vector<int> speed(n);
        
        for(int i=0; i<n; i++){
            cin >> speed[i];
        }
        int max= *max_element(speed.begin(), speed.end());
        
        if(max<10){
            cout << "1" << endl;
        } else if(max<20){
            cout << "2" << endl;
        } else{
            cout << "3" << endl;
        }
        
    }
    
    return 0;
}
