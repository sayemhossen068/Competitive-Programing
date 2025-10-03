#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;

    int output = 0;
    while(n--) {
        cin >> s;
        if(s == "Tetrahedron") {
            output += 4;
        } else if(s == "Cube") {
            output += 6;
        } else if(s == "Octahedron") {
            output += 8;
        } else if(s == "Dodecahedron") {
            output += 12;
        } else if(s == "Icosahedron") {
            output += 20;
        }
    }
    cout << output << endl;
}