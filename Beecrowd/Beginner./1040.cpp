#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n1, n2, n3, n4, exam, avg, finalAvg;
    
    cin >> n1 >> n2 >> n3 >> n4;

    avg = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0;
    
    cout << fixed << setprecision(1);
    cout << "Media: " << avg << endl;

    if (avg >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (avg < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;
        cin >> exam;
        cout << "Nota do exame: " << exam << endl;
        finalAvg = (avg + exam) / 2.0;
        if (finalAvg >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << finalAvg << endl;
    }

    return 0;
}
