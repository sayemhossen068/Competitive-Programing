#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;

  string s;
  cin >> s;

  sort(s.begin(), s.end());

  int ans = (s[s.size() - 1] - 'a') + 1;

  cout << ans << endl;
}

int main (){
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int n;
  cin >> n;
  
  while(n--){
    solve();
  }
  
  return 0;
}
