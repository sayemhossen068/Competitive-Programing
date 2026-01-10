#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int min=arr[0];
    int position=0;

    for(int j=0; j<n; j++) {
        if(arr[j] < min) {
            min = arr[j];
            position = j;
        }
    }

    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << position << endl;

    return 0;
}