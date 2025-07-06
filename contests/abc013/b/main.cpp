#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  int a1 = 0,a2 = 0;
  cin >> a >> b;
  int high,low;
  high = max(a,b);
  low = min(a,b);
  a1 = high - low;
  a2 = (low + 10) - high;
  cout << min(a1,a2) << endl;
}