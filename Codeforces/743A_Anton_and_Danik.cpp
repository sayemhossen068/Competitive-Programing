#include<iostream>
using namespace std;
int main () {
    int n, i;
    char x;
    int count_A=0;
    int count_D=0;
    
    cin >> n;
    
    for(i=1; i<=n; i++){
        cin >> x;
        
        if(x=='A'){
            count_A++;
        } else if (x=='D') {
            count_D++;
        }
    }
    
    if(count_A > count_D){
        cout << "Anton" << endl;
    } else if(count_D > count_A){
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
    
    return 0;
}
