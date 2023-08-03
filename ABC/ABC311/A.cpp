#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  bool isA = false;
  bool isB = false;
  bool isC = false;
  for(int i = 0; i < n; i++){
    if(s[i] == 'A'){
      isA = true;
    }
    if(s[i] == 'B'){
      isB = true;
    }
    if(s[i] == 'C'){
      isC = true;
    }
    if (isA && isB && isC){
      cout << i + 1 << endl;
      return 0;
    }
  }
}