#include <iostream>
using namespace std;

int main() {
    int n, x, y;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        int sum = 0;
        int count = 0;

        int j = x;
        while(count < y) {
            if(j % 2 != 0) {
                sum += j;
                count++;
            }
            j++;
        }

        cout << sum << endl;
    }

    return 0;
}