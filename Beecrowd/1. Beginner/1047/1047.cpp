#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    int startMinutes, endMinutes, duration, hours, minutes;

    cin >> h1 >> m1 >> h2 >> m2;

    startMinutes = h1 * 60 + m1;
    endMinutes = h2 * 60 + m2;

    if (startMinutes < endMinutes) {
        duration = endMinutes - startMinutes;
    } else {
        duration = (24 * 60 - startMinutes) + endMinutes;
    }

    hours = duration / 60;
    minutes = duration % 60;

    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;

    return 0;
}
