#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n, a, b;
  cin >> n >> a >> b;

  int x = n * a;
  int y = ((n/2)*b) + ((n%2)*a);
  int ans = 0;

  ans = min(x, y);

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
