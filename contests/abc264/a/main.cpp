#include <bits/stdc++.h>
using namespace std;

int main(){
  int l,r;
  cin >> l >> r;

  string atc = "atcoder";
  for (int i = l - 1; i <= r - 1;i++) {
    cout << atc[i];
  }
}