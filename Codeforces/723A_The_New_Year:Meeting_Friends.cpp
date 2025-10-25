##include <bits/stdc++.h>
using namespace std;
int main () {
    vector<int>d;
    
    for(int i=0; i<3; i++){
        int a;
        cin >> a;
        d.push_back(a);
    }
    sort(d.begin(), d.end());
 
    int x=d[2] - d[1];
    int y=d[1] - d[0];
    
    cout << x+y << endl;
} <bits/stdc++.h>
using namespace std;
int main () {
    vector<int>d;
    
    for(int i=0; i<3; i++){
        int a;
        cin >> a;
        d.push_back(a);
    }
    sort(d.begin(), d.end());
 
    int x=d[2] - d[1];
    int y=d[1] - d[0];
    
    cout << x+y << endl;
}