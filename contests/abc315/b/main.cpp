#include <bits/stdc++.h>
using namespace std;

int sum (vector<int> v){
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return sum;
}

int main(){
  int m;
  cin >> m;
  vector<int> d(m);
  for (int i = 0; i < m; i++) cin >> d[i];
  
  int days = sum(d);
  if (days == 1) {
    cout << "1 1" << endl;
    return 0;
  }
  int half_day = ((days + 1) / 2);

  int sub = 0;
  for (int i = 0; i < m; i++){ 
    if (sub + d[i] < half_day){
      sub += d[i];
    } else {
      int a = half_day - sub;
      cout << i + 1 << " " << a << endl;
      return 0;
      
    }
  }
}