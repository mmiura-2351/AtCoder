#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,x;
  cin >> n >> x;
  string s;
  for (int i = 0; i < 26; i++){
    for (int j = 0; j < n; j++){
      s.push_back(char(65 + i));
    }
  }
  cout << s[x - 1] << endl;
}