#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<int>shoes(4);

    int count = 0;

    for(int i=0; i < shoes.size(); i++) {
        cin >> shoes[i];
    }

    set<int> uniqueshoes;

    for(int i=0; i < shoes.size(); i++) {
        uniqueshoes.insert(shoes[i]);
    }
    int needed = 4 - uniqueshoes.size();

    cout << needed << endl;
}