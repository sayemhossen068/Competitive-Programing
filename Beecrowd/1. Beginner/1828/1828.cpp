#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    string sheldon, raj;
    
    for (int i = 1; i <= t; i++) {
        cin >> sheldon >> raj;

        cout << "Caso #" << i << ": ";
        
        if (sheldon == raj) {
            cout << "De novo!" << endl;
        } 
        else if (
            (sheldon == "tesoura" && (raj == "papel" || raj == "lagarto")) ||
            (sheldon == "papel" && (raj == "pedra" || raj == "Spock")) ||
            (sheldon == "pedra" && (raj == "lagarto" || raj == "tesoura")) ||
            (sheldon == "lagarto" && (raj == "Spock" || raj == "papel")) ||
            (sheldon == "Spock" && (raj == "tesoura" || raj == "pedra"))
        ) {
            cout << "Bazinga!" << endl;
        } 
        else {
            cout << "Raj trapaceou!" << endl;
        }
    }

    return 0;
}