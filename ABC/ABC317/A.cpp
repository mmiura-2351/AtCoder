#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,h,x; cin >> n >> h >> x;
  vector<int> p(n);
  for (int i = 0; i < n; i++) cin >> p[i];

  int ans = 10000;
  for (int i = 0; i < n; i++){
    if (h + p[i] >= x && h + p[i] < ans){
      ans = i + 1;
    }
  }
  cout << ans << endl;
}