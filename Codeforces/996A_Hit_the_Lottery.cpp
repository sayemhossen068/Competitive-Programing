#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int amount = 0;
    int remainder = n;

    amount += remainder / 100;
    remainder %= 100;

    amount += remainder / 20;
    remainder %= 20;

    amount += remainder / 10;
    remainder %= 10;

    amount += remainder / 5;
    remainder %= 5;

    amount += remainder / 1;

    cout << amount << endl;
}