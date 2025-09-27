#include <iostream>
using namespace std;

int main () {
    string days;
    int d1, d2, h1, h2, m1, m2, s1, s2;

    cin >> days >> d1;
    scanf("%d : %d : %d", &h1, &m1, &s1);

    cin >> days >> d2;
    scanf("%d : %d : %d", &h2, &m2, &s2);

    int start = d1*86400 + h1*3600 + m1*60 + s1;
    int end = d2*86400 + h2*3600 + m2*60 + s2;

    int duration = end - start;

    int day = duration/86400;
    duration %= 86400;

    int hours = duration/3600;
    duration %= 3600;

    int minute = duration/60;
    int second = duration % 60;

    cout << day << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minute << " minuto(s)" << endl;
    cout << second << " segundo(s)" << endl;

    return 0;

}
