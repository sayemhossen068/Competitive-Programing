#include<bits/stdc++.h>
using namespace std;
int main () {
    string x;
    for(int i=1; i<=2000; i++)
    {
        cin >> x;
        if(x.length() <= 14)
        {
            if(x == "HELLO")
            {
                cout << "Case " << i << ": ENGLISH" << endl;
            }
            else if(x == "HOLA")
            {
                cout << "Case " << i << ": SPANISH" << endl;
            }
            else if(x== "HALLO")
            {
                cout << "Case " << i << ": GERMAN" << endl;
            }
            else if(x== "BONJOUR"){
                cout << "Case " << i << ": FRENCH" << endl;
            }
            else if(x== "CIAO")
            {
                cout << "Case " << i << ": ITALIAN" << endl;
            }
            else if(x== "ZDRAVSTVUJTE")
            {
                cout << "Case " << i << ": RUSSIAN" << endl;
            }
            else if(x=="#"){
                break;
            } else {
                cout << "Case " << i << ": UNKNOWN" << endl;
            }
            
        }
    }
}
