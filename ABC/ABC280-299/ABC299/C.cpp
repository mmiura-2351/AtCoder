#include <bits/stdc++.h>
using namespace std;

int solve(int n, string s){
  int max = -1;
  int pre = 0;
  bool is_dango = false;
  for (int i = 0; i < n; i++){
    if (s[i] == 'o' && is_dango == true) {
      pre += 1;
    } else if(s[i] == 'o' && is_dango == false){
      is_dango = true;
      pre = 1;
    } else if(s[i] == '-' && is_dango == false){
      max = max > pre ? max : pre;
      pre = 0;
      is_dango = true;
    } else if(s[i] == '-' && is_dango == true){
      is_dango = false;
    }
  }
  for (int i = n; i == 0; i--){
    if (s[i] == 'o' && is_dango == true) {
      pre += 1;
    } else if(s[i] == 'o' && is_dango == false){
      is_dango = true;
      pre = 1;
    } else if(s[i] == '-' && is_dango == false){
      max = max > pre ? max : pre;
      pre = 0;
      is_dango = true;
    } else if(s[i] == '-' && is_dango == true){
      is_dango = false;
    }
  }
  return max != 0 ? max : -1;
}

int main(){
  int n; cin >> n;
  string s; cin >> s;
  int ans = solve(n,s);
  cout << ans << endl;
}