#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int arr[100], i;
    double n;
    
    cin >> n;
    double j=n;
    for(i=0; i<100; i++){
        cout << fixed << setprecision(4);
        cout << "N[" << i << "] = " << j << endl;
        j/=2.0000;
        }
    
    return 0;
}
