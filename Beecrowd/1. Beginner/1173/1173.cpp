#include <iostream>
using namespace std;
int main () {
    int arr[10];
    int x;
    
    cin >> x;
    
    for(int i=0; i<10; i++) {
        cout << "N[" << i << "] = " << x << endl;
        x*=2;
    }
}
