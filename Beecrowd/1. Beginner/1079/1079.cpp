#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int n;
    double a,b,c, avg;
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> a >> b >> c;
        avg= ((a*2 + b*3 + c*5)/(2.0+3.0+5.0));
        cout << fixed << setprecision(1);
        cout << avg << endl;
    }
    return 0;
}
