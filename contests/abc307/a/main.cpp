#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int weeklyTotal = 0, total = 0;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < 7; j++){
      int a;
      cin >> a;
      total += a;
    }
    cout << total << " ";
    total = 0;
  }
  cout << endl;
}