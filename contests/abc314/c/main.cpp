// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//   int n, m;
//   cin >> n >> m;

//   string S;
//   cin >> S;

//   vector<int> C(n);
//   for(int i = 0; i < n; ++i) {
//       cin >> C[i];
//   }

//   for(int i = 1; i <= m; ++i) {
//       vector<int> indices;
//       for(int j = 0; j < n; ++j) {
//           if(C[j] == i) {
//               indices.push_back(j);
//           }
//       }

//       char last_char = S[indices.back()];
//       for(int j = indices.size() - 1; j > 0; --j) {
//           S[indices[j]] = S[indices[j - 1]];
//       }
//       S[indices[0]] = last_char;
//   }
//   cout << S << endl;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;

  string S;
  cin >> S;

  vector<int> C(n);
  for(int i = 0; i < n; ++i) {
      cin >> C[i];
  }

  vector<vector<int>> color_to_indices(m + 1);

  for(int i = 0; i < n; ++i) {
      color_to_indices[C[i]].push_back(i);
  }

  for(int i = 1; i <= m; ++i) {
      vector<int>& indices = color_to_indices[i];
      if(indices.empty()) continue;

      char last_char = S[indices.back()];
      for(int j = indices.size() - 1; j > 0; --j) {
          S[indices[j]] = S[indices[j - 1]];
      }
      S[indices[0]] = last_char;
  }
  cout << S << endl;
}
