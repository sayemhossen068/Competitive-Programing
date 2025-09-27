#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int i;
    double x, sum=0, avg;
    for(i=1; i<=12; i++) {
        cin >> x;
        sum+=x;
    }
    avg=sum/12;
    cout << fixed << setprecision(2);
    cout << "$" << avg << endl;
}
