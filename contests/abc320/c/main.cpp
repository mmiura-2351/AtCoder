#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using str=string;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define inputarr(arr, size) do {for (size_t i = 0; i < size; ++i) { cin >> arr[i]; }} while (0)
#define printarr(arr, size) do {for (size_t i = 0; i < size; ++i) { cout << arr[i]; if (i != size - 1) cout << " ";} cout << endl;} while (0)

template <typename... Args>
void input(Args&... args) {
  ((cin >> args), ...);
}

template <typename... Args>
void print(Args... args) {
  ((cout << args << " "), ...);
}

template <typename... Args>
void println(Args... args) {
  print(args...);
  cout << endl;
}

int slot(int t, int m) {
  return t % m;
}

int main(){
  int m, ans = 1000;
  str s1,s2,s3;
  input(m,s1,s2,s3);
  for (int i = 0; i < 10; i++) {
    int s = slot(i,m);
    if (s1[s] == '0' + i) {
      for (int j = 0; i < 10; j++) {
        int t = slot(j,m);
        if (s2[t] == '0' + j) {
          for (int k = 0; k < 10; k++) {
            int u = slot(k,m);
            if (s3[u] == '0' + k) {
              ans = min(ans,max({i,j,k}));
            }
          }
        }
      }
    }
  }
  if (ans == 1000) {
    println(-1);
  } else {
    println(ans);
  }
}