#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> cards(n,0);
  for(int i = 0; i < 4*n-1; i++){
    int A;
    cin >> A;
    cards[A-1]++;
  }
  for(int i = 0; i < n; i++){
    if (cards[i] != 4) {
      cout << i + 1 << endl;
      return 0;
    }
  }
}