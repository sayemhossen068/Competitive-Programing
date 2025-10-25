#include <bits/stdc++.h>
using namespace std;
 
long long total(long long a){
    long long sum=0;
    for(int i=1; i<=a; i++){
        int b;
        cin >> b;
        sum+=b;
    }
    return sum;
}
 
bool checkSquare(long long sum){
    bool square = false;
    long long x=sqrt(sum);
    
    if((x*x) == sum){
        square = true;
    }
    
    return square;
}
 
 
int main (){
    long long n;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        int a;
        cin >> a;
        
        long long sum = total(a);
        long long output = checkSquare(sum);
        
        cout << (output ? "YES" : "NO") << endl;
    }
    
}