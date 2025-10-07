#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    vector<int> num(n);

    int even=0, odd=0;
    for(int i=0; i<n; i++){
        cin >> num[i];
        if(num[i] % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }

    if(even > odd){
        for(int i=0; i<n; i++){
            if(num[i] % 2 != 0){
                cout << i+1;
                break;
            }
        }
    } else {
        for(int i=0; i<n; i++){
            if(num[i] % 2 == 0){
                cout << i+1;
                break;
            }
        }
    }
}
