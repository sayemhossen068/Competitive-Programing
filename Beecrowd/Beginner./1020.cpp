#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int year = n / 365;
    int month = (n % 365) / 30;
    int days = (n % 365) % 30 ;

    cout << year << " ano(s)\n" << month << " mes(es)\n" << days << " dia(s)" << endl;
    
    return 0;

}
