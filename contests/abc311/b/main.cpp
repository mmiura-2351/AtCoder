#include <bits/stdc++.h>
using namespace std;

bool checkDay(int i, int n, vector<string> &s){
  for (int j = 0; j < n; j++){
    if (s[j][i] != 'o'){
      return false;
    }
  }
  return true;
}

int main(){
  int n,d;
  cin >> n >> d;
  vector<string> s(n);

  int ans = 0;
  for (int i = 0; i < n; i++){
    cin >> s[i];
  }
  
  int preAns = 0;
  for (int i = 0; i < d; i++){
    if (checkDay(i, n, s)){
      preAns++;
    } else {
      ans = max(ans,preAns);
      preAns = 0;
    }
  }
  ans = max(ans,preAns); // Check the last accumulated days.

  cout << ans << endl;
  return 0;
}
