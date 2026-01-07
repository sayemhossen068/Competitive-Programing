#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s;
    cin >> s;
    
    for (i = 1; i < s.length(); i++)
    {
        if (islower(s[i]))
        { 
            break;
        }
    }
    
    if (i == s.length())
    {
        for (int j = 0; j < s.length(); j++)
        {
            if (islower(s[j]))
                cout << (char)toupper(s[j]);
            else
                cout << (char)tolower(s[j]);
        }
    }
    else
    {
        cout << s;
    }

    return 0;
}
