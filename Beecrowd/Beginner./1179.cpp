#include <iostream>
using namespace std;

int main() {
    int number;
    int par[5], impar[5];
    int parCount = 0, imparCount = 0;

    for (int i = 0; i < 15; i++) {
        cin >> number;

        if (number % 2 == 0) {
            par[parCount++] = number;
            if (parCount == 5) {
                for (int j = 0; j < 5; j++) {
                    cout << "par[" << j << "] = " << par[j] << endl;
                }
                parCount = 0;
            }
        } else {
            impar[imparCount++] = number;
            if (imparCount == 5) {
                for (int j = 0; j < 5; j++) {
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                imparCount = 0;
            }
        }
    }

    for (int i = 0; i < imparCount; i++) {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }

  
    for (int i = 0; i < parCount; i++) {
        cout << "par[" << i << "] = " << par[i] << endl;
    }

    return 0;
}
