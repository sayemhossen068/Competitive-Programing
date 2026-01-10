#include <iostream>
using namespace std;
int main () {
    int n, a, in_count=0, out_count=0;

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> a;
        if(a >= 10 && a <= 20) {
            in_count++;
        }
        else {
            out_count++;
        }
    }

    cout << in_count << " in" << endl;
    cout << out_count << " out" << endl;

return 0;
}
