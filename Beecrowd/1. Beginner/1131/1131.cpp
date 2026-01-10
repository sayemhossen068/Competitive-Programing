#include <iostream>
using namespace std;

int main () {
    int inter_goals, germio_goals;
    int choice;

    int total_match=0;
    int inter_win=0;
    int germio_wins = 0;
    int draw=0;

    do {
        cin >> inter_goals >> germio_goals;
        total_match++;

        if (inter_goals > germio_goals) {
            inter_win++;
        } else if (germio_goals > inter_goals) {
            germio_wins++;
        } else {
            draw++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> choice;
    } while (choice == 1);

    cout << total_match << " grenais" << endl;
    cout << "Inter:" << inter_win << endl;
    cout << "Gremio:" << germio_wins << endl;
    cout << "Empates:" << draw << endl;

    if (inter_win > germio_wins) {
        cout << "Inter venceu mais" << endl;
    } else if (germio_wins > inter_win) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}
