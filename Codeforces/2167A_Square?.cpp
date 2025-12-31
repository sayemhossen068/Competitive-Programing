#include <bits/stdc++.h>
using namespace std;

void solve(){
  vector <int> arr(4);
  for(auto &x : arr){
    cin >> x;
  }
  sort(arr.begin(), arr.end());
  if(arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3]){
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
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
