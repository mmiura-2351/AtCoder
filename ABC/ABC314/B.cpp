#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int minSize = INT_MAX;
    vector<int> ansList;
    vector<vector<int>> v;
    
    for (int i = 0; i < n; i++){
        int A;
        cin >> A;
        vector<int> vec(A);
        for (int j = 0; j < A; j++){
            cin >> vec[j];
        }
        v.push_back(vec);
    }
    
    int x;
    cin >> x;

    for (int i = 0; i < n; i++){
        bool foundX = false;
        for (int j = 0; j < v[i].size(); j++){
            if (v[i][j] == x){
                foundX = true;
                break;
            }
        }
        if (foundX){
            if (v[i].size() < minSize){
                ansList.clear();
                minSize = v[i].size();
                ansList.push_back(i + 1);
            } else if (v[i].size() == minSize) {
                ansList.push_back(i + 1);
            }
        }
    }

    cout << ansList.size() << endl;
    for (int i = 0; i < ansList.size(); i++){
        cout << ansList[i] << " ";
    }
    cout << endl;
    return 0;
}
