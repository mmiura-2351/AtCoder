#include <bits/stdc++.h>
using namespace std;

int main(){
  int unknown = -1;
  int n,m;
  cin >> n >> m;
  vector<int> array(n);
  // array : 1位の可能性があるプレイヤーの配列
  for(int i = 0; i < n; ++i){
    array[i] = i + 1;
  }
  
  for(int i = 0; i < m; ++i){
    int p1,p2;
    cin >> p1 >> p2;
    if (find(array.begin(), array.end(), p1) != array.end()){
      if (find(array.begin(), array.end(), p2) != array.end()){
        array.erase(find(array.begin(), array.end(), p2));
      } else {
        continue;
      }
    } else {
      if (find(array.begin(), array.end(), p2) != array.end()){
        array.erase(find(array.begin(), array.end(), p2));
      }
    }
  }
  
  if (array.size() != 1){
    cout << unknown << endl;
    return 0;
  } else {
    cout << array[0] << endl;
    return 0;
  }
}