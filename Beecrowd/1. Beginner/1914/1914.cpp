#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    
    while(n--){
        string p1, c1, p2, c2;
        int n1, n2;
        
        cin >> p1 >> c1 >> p2 >> c2;
        cin >> n1 >> n2;
        
        int sum = n1 + n2;
        
        if(sum % 2 == 0){
            if(c1 == "PAR"){
                cout << p1 << endl;
            } else {
                cout << p2 << endl;
            }
        } else {
            if(c1 == "IMPAR"){
                cout << p1 << endl;
            } else {
                cout << p2 << endl;
            }
        }
    }
    
    return 0;
}