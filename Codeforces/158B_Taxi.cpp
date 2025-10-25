#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    int x, one = 0, two = 0, three = 0, four = 0;
    
    while(n--){
        
        cin >> x;
        
        if(x == 1){
            one++;
        } else if (x == 2){
            two++;
        } else if (x == 3){
            three++;
        } else if(x == 4){
            four++;
        }
    }
    
    int taxi = four;
    int a = min(three, one);
    taxi += three;
    one -= a;
    
    taxi+=two/2;
    
    if(two % 2){
        taxi++;
        one = max(0, one - 2);
    }
    
    taxi += (one + 3) /4;
    
    cout << taxi << endl;
}