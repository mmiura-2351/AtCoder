#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,c,d;
  bool sheets[100][100] = {};
  int ans = 0;
  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> a >> b >> c >> d;
    for (int j = a; j < b; j++){
      for (int k = c; k < d; k++){
        sheets[j][k] = true;
      }
    }
  }
  for (int i = 0; i < 100; i++){
    for (int j = 0; j < 100; j++){
      if (sheets[i][j]){
        ans++;
      }
    }
  }
  cout << ans << endl;
}