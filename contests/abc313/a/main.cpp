#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int max = 0;
  int p1;
  cin >> p1;
  for(int i = 1; i < n; i++){
    int p;
    cin >> p;
    max = max > p ? max : p;
  }
  if (max < p1) {
    cout << 0 << endl;
    return 0;
  } else {
    cout << max - p1 + 1 << endl;
    return 0;
  }
}