#include <bits/stdc++.h>
using namespace std;
int main (){
    int n, x;
    
    cin >> n;
    
    while(n--){
        cin >> x;
        bool prime = false;
        for(int i=2; i<x; i++){
            if(x%i==0){
                prime = true;
            }
            
        }
        if(prime){
            cout << x << " nao eh primo" << endl;
        } else {
            cout << x << " eh primo" << endl;
        }
    }
}