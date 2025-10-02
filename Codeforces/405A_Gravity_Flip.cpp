#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;

    vector<int> cubes;
    for(int i=0; i<n; i++) {
        cin >> a;
        cubes.push_back(a);
    }

    sort(cubes.begin(), cubes.end());

    for(int x : cubes) {
        cout << x << " ";
    }
    cout << endl;
}