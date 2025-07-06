#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,q;
  cin >> n >> q;
  vector<vector<int>> query(q, vector<int>(3));
  
  for(int i = 0; i < q; i++){
    cin >> query[i][0];
    if(query[i][0] == 1) {
      cin >> query[i][1] >> query[i][2];
    } else {
      cin >> query[i][1];
    }
  }

  vector<int> box(n);
  for (int i = 0; i < q; i++){
    if (query[i][0] == 1){
      box[query[i][2]] = query[i][1];
    } else if (query[i][0] == 2){
      cout << box[query[i][1]] << endl;
    } else if (query[i][0] == 3){
      cout << box[query[i][1]] << endl;
    }
  }
}
