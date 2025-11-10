#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int B = 3;
    vector<vector<int>> ability(B);

    int n;
    cin >> n;
    for (int p = 1; p <= n; p++) {
        int current;
        cin >> current;
        ability[current - 1].push_back(p);
    }

    int total = ability[0].size();
    for (int p = 1; p < B; p++) {
        if (ability[p].size() < total) {
            total = ability[p].size();
        }
    }

    cout << total << endl;
    for (int p = 0; p < total; p++) {
        for (int q = 0; q < B; q++) {
            cout << ability[q][p] << " ";
        }
        cout << endl;
    }

    return 0;
}
