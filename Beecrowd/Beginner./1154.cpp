#include<bits/stdc++.h>
using namespace std;
int main () {
    int n, i;
    double sum =0, count=0;
    double avg;
    
    while(1) {
        cin >> n;
        if(n<=0){
            break;
        }
        sum+=n;
        count+=1;
    }
    avg = (sum / count);
    cout << fixed << setprecision(2);
    cout << avg << endl;
}
