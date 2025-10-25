#include <iostream>
using namespace std;

int main() {
    int N;
    
    while (cin >> N) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i == N/2 && j == N/2) {
                    cout << 4;
                }
                else if (i >= N/3 && i < N - N/3 && j >= N/3 && j < N - N/3) {
                    cout << 1;
                }
                else if (i == j) {
                    cout << 2;
                }
                else if (i + j == N - 1) {
                    cout << 3;
                }
                else {
                    cout << 0;
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    
    return 0;
}