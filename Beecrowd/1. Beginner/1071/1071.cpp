#include <iostream>
using namespace std;

int main () {

    int a, b, sum=0, i;
    int min, max;

    cin >> a >> b;

    if(a < b) {
        min = a;
        max = b;
    }
    else {
        min = b;
        max = a;
    }

    for(i=(min + 1); i < max; i++) {
        if(i%2 != 0) {
            sum += i;
        }
    }

    cout << sum << endl;
    
return 0;
}
