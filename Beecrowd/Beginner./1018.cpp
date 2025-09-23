#include <iostream>

using namespace std;

int main() {
    int amount;
    cin >> amount;

    cout << amount << endl;

    int notes[] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 7; i++) {
        int count = amount / notes[i];
        amount = amount % notes[i];
        cout << count << " nota(s) de R$ " << notes[i] << ",00" << endl;
    }

    return 0;
}
