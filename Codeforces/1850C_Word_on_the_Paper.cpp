#include <bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  
  for(int i=0; i<8; i++){
    cin >> s;

    for(auto c : s){
      if(c >= 'a' && c <= 'z'){
        cout << c;
      }
    }
  }
  cout << endl;
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
