#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int total = 0, rabbits = 0, rats = 0, frogs = 0;

    for (int i = 0; i < N; i++) {
        int X;
        char C;
        cin >> X >> C;

        total += X;

        if (C == 'C') rabbits += X;
        else if (C == 'R') rats += X;
        else if (C == 'S') frogs += X;
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << rabbits << endl;
    cout << "Total de ratos: " << rats << endl;
    cout << "Total de sapos: " << frogs << endl;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (rabbits * 100.0 / total) << " %" << endl;
    cout << "Percentual de ratos: " << (rats * 100.0 / total) << " %" << endl;
    cout << "Percentual de sapos: " << (frogs * 100.0 / total) << " %" << endl;

    return 0;
}
