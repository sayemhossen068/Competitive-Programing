#include <iostream>
using namespace std;
int main () {
    int i, j=7;
    for(i=1; i<=9; i++) {
        cout << "I=" << i << " J=" << j <<  endl;
        cout << "I=" << i << " J=" << j-1 <<  endl;
        cout << "I=" << i << " J=" << j-2 <<  endl;
        i++;
        j+=2;
    }
}
