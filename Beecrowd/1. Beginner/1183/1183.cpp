#include <iostream>
using namespace std;

int main() {
    char op; cin >> op;
    double sum = 0, x;
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++){
            cin >> x;
            if(j>i) sum += x;
        }
    cout << (op=='S'?sum:sum/66) << endl;
}
