#include <bits/stdc++.h>
using namespace std;

int countTrue(bool a[]){
  int ans = 0;
  for(bool yn : a){
    if (yn){
      ans++;
    }
  }
  return ans;
}

int main(){
  int n,m,a,b;
  cin >> n >> m;
  bool city[n][m] = {};
  for(int i = 0; i < n; i++){
    cin >> a >> b;
    city[a-1][b-1] = true;
    city[b-1][a-1] = true;
  }
  for(int i = 0; i < n; i++){
    // city[i]の中のtrueの個数を調べる
    int tNum = countTrue(city[i]);
  }
}