#include <bits/stdc++.h>
using namespace std;

long long lpow(int n, int k) {
  long long res = 1;
  for (int i = 0; i < k; i++) {
    res *= n;
  }
  return res;
}

int main() {
  long long n;
  cin >> n;

  for (int i = 1; i <= 38; i++) {
    for (int j = 1; j <= 26; j++) {
      if (lpow(3, i) + lpow(5, j) == n) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }
  cout << -1 << endl;
}
