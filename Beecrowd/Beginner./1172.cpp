#include <iostream>
using namespace std;
int main () {
    int i;
    int arr[10];
    
    for(i=0; i<10; i++) {
        cin >> arr[i];
        if(arr[i]<=0) {
            arr[i]=1;
        }
    cout << "X[" << i << "] = " << arr[i] << endl;
    }
    
}
