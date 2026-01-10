#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string a, b;
        cin >> a >> b;

        if (a.size() >= b.size() && 
            a.substr(a.size() - b.size()) == b)
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl;
    }
}
