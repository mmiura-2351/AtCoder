#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;

int main() {
  int n, r;
  cin >> n >> r;
  int d[n], a[n];
  rep(i, n) {
    cin >> d[i] >> a[i];
  }

  rep(i, n) {
    if (d[i] == 1 && 1600 <= r && r <= 2799) {
      r += a[i];
    } else if (d[i] == 2 && 1200 <= r && r <= 2399) {
      r += a[i];
    }
  }

  cout << r << endl;
}