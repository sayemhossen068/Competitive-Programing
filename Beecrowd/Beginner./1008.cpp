#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    float b, c;
    
    cin >> a >> b >> c;
    
    cout << fixed << setprecision(2);
    cout << "NUMBER = " << a << endl;
    cout << "SALARY = U$ " << (b*c) << endl;
    return 0;
}
