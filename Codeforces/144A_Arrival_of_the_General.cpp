#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int maxheight=0, minheight=101;
    int maxposition=0, minposition=0;

    for(int i=0; i<n; i++) {
        int h;
        cin >> h;

        if(h>maxheight) {
            maxheight = h;
            maxposition = i;
        }
        if(h<=minheight) {
            minheight = h;
            minposition = i;
        }

    }

    if (maxposition > minposition) {
        cout << maxposition + (n - 1 - minposition) - 1 << endl;
    } else {
        cout << maxposition + (n - 1 - minposition) << endl;
    }
}