#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int x, y;
    double x1=4.00, x2=4.50, x3=5.00, x4=2.00, x5=1.50, z;
    
    cin >> x;
    cin >> y;
    
    if(x==1) {
        z = y * x1;
    }
    else if (x==2) {
        z = y * x2;
    }
    else if(x==3) {
        z = y * x3;
    }
    else if(x==4) {
        z = y * x4;
    }
    else if(x==5) {
        z = y * x5;
    }
    
    cout << fixed << setprecision(2);
    cout << "Total: R$ " << z << endl;
    
return 0;
}