#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    double arr[100];
    int x;
    
    for(int i=0; i<100; ++i) {
        cin >> arr[i];
        if (arr[i]<=10){
            cout << fixed << setprecision(1);
            cout << "A[" << i << "] = " << arr[i] << endl;
        }
    }
}
