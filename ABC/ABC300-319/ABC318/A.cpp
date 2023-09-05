#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,p;
  cin >> n >> m >> p;

  int total = 0;
  while (m <= n) {
    total++;
    m += p;
  }
  cout << total << endl;
}