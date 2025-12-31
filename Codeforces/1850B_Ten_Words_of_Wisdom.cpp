#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int bestQuality = -1;
        int bestIndex = -1;

        for(int i = 1; i <= n; i++){
            int a, b;
            cin >> a >> b;

            if(a <= 10){
                if(b > bestQuality){
                    bestQuality = b;
                    bestIndex = i;
                }
            }
        }
        cout << bestIndex << "\n";
    }

    return 0;
}
