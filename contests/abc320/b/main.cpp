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

int main(){
  str s;
  input(s);
  for (int i = s.size(); i > 0; i--) {
    for (int j = 0; j < s.size()-i+1; j++) {
      str t = s.substr(j,i);
      str u = t;
      reverse(all(u));
      if (t == u) {
        println(i);
        return 0;
      }
    }
  }
}