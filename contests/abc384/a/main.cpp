#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int n;
  string s;
  char c1, c2;

  cin >> n >> c1 >> c2 >> s;
  rep(i, n) {
    if(s[i] != c1){
      s[i] = c2;
    }
  }
  cout << s << endl;
}