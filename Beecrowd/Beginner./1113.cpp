#include <iostream>
using namespace std;
int main () {
    int a, b;

    while(true) {
        cin >> a >> b;
        if(a == b) break;

        if(a>b) {
            cout << "Decrescente" << endl;
        }
        if(a<b) {
            cout << "Crescente" << endl;
        }
    }
    return 0;
}
