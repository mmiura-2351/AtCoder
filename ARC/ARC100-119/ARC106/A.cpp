#include <bits/stdc++.h>
using namespace std;

// 不完全コード　バグあり
int main() {
  long long n;
  cin >> n;

  long long pow3 = 1;
  for (int i = 0; pow3 < n; i++) {
    long long pow5 = 1;
    for (int j = 0; pow5 + pow3 < n; j++) {
      if (pow3 + pow5 == n) {
        cout << i << " " << j << endl;
        return 0;
      }
      pow5 *= 5;
    }
    pow3 *= 3;
  }
  cout << -1 << endl;
}
