#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin >> n;

  string s;
  cin >> s;
  int x = 0, y = 0;
  for(char c : s){
    if(c == 'L'){
      x--;
    } if(c == 'R'){
      x++;
    } if(c == 'U'){
      y++;
    } if(c == 'D'){
      y--;
    } if(x == 1 && y == 1){
      cout << "YES\n";
      return;
    }
  }

  cout << "NO\n";

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
