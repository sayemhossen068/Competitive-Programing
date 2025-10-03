#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    int max=0;
    cin >> a >> b >> c;
    vector<int> result = {a + b + c,
                          a * b * c,
                          (a + b) * c,
                          a * (b + c),
                          a + (b * c),
                          (a * b) + c
                         };
    for(int i=0; i<result.size(); i++) {
        if(result[i] > max) {
            max = result[i];
        }
    }
    cout << max << endl;
}