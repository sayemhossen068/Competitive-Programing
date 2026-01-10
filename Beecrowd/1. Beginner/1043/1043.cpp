#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double a, b, c, area, perimeter;

    cin >> a >> b >> c;
    area = 0.5 *(a+b) * c;

    perimeter = a + b + c;

    if(a+b>c && b+c>a && c+a>b){
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << perimeter << endl;
    }
    else {
        cout << fixed << setprecision(1);
        cout << "Area = " << area << endl;
    }
return 0;
}
