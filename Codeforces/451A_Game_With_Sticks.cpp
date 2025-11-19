#include <iostream>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    int a=1, count = 0;
    for(;;)
    {
        if(n-a == 0) break;
        if(m-a == 0) break;
        a++;
        count++;
    }
    if(count % 2 == 0) cout << "Akshat" << endl;
    else{cout << "Malvika" << endl;} 
    return 0;
}