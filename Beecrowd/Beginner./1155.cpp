#include<bits/stdc++.h>
using namespace std;
int main () 
{
    float sum=0;
    
    for(int i=1; i<=100; i++)
    {
        sum += 1.0/i;
    }
    cout << fixed << setprecision(2);
    cout << sum << endl;
}
