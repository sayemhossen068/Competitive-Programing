#include<iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    while(n--) {
        int a, b;
        cin >> a >>b;
        if(a<=2) {
            cout << "1"<< endl;
        } else {
            cout << ((a - 3)/ b) +2 << endl;
        }
    }
    return 0;
}