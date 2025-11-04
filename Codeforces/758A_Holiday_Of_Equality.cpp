#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    
    long long arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    long long output =0;
    long long max = arr[0];
    for(int i=0; i<n; i++){
        if(max < arr[i]){
           max = arr[i];
        }
    }
    
    for(int i=0; i<n; i++){
        output += abs(max - arr[i]);
    }
    
    cout << output << endl;
    
}