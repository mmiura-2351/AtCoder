#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,p,q;
  cin >> n >> p >> q;
  int drink = p;
  for (int i = 0; i < n; i++){
    int d; cin >> d;
    drink = min(drink, q+d);
  }
  cout << drink << endl;
}