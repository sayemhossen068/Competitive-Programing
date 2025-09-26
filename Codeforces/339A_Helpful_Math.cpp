#include <bits/stdc++.h>
using namespace std;
int main () {
    string x;
    cin >> x;

    for(int i=0; i<=x.size(); i+=2){
        int min = i;
        for(int j=i+2; j<=x.size(); j+=2){
            if(x[min] > x[j]) {
                min = j;
            }
        }
        if(min != i){
            swap(x[i], x[min]);
        }
    }
    cout << x << endl;
} 
