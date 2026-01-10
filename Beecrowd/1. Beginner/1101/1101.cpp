#include <iostream>
using namespace std;
int main () {
    int x, y, temp;
    int sum;

    while(true) {
        cin >> x >> y;
        if(x<=0){
            break;
        }
        if(y<=0){
            break;
        }

        if(x>y) {
            temp =x;
            x=y;
            y=temp;
        }
        sum = 0;
        for(int i = x; i<= y; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
    }
    return 0;
}
