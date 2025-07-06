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
  int a,b,c,d,e;
  input(a,b,c,d,e);
  vector<int> v = {a,b,c,d,e};
  sort(all(v));
  if ((v[0] == v[1] && v[1] == v[2]) && (v[3] == v[4]) || (v[0] == v[1])&& (v[2] == v[3] && v[3] == v[4])) {
    println("Yes");
  } else {
    println("No");
  }
}