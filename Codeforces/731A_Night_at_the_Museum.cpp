#include <bits/stdc++.h>
using namespace std;
 
void solve(){
  string s;
  cin >> s;
 
  char cur = 'a';
  int ans = 0;
 
  for(char c : s){
    int diff = abs(c - cur);
    ans += min(diff, 26 - diff);
    cur = c;
  }
 
  cout << ans << endl;
 
}
 
int main (){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  solve();
  
  return 0;
}
