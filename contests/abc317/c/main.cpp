#include <bits/stdc++.h>
using namespace std;

/** 
 * @param node スタート地点
 * @param sum 
 * @param maxSum 最大値
 * @param graph グラフ
 * @param visited 既に訪問済み
 */
void dfs(int node, int sum, int &maxSum, vector<vector<int>> &graph, vector<bool> &visited) {
  visited[node] = true;
  
  for (int i = 1; i < graph.size(); ++i) {
    if (graph[node][i] != -1 && !visited[i]) {
      dfs(i, sum + graph[node][i], maxSum, graph, visited);
    }
  }
  
  maxSum = max(maxSum, sum);
  visited[node] = false;
}

int main(){
  int n, m; 
  cin >> n >> m;
  
  vector<vector<int>> graph(n + 1, vector<int>(n + 1, -1));
  
  for (int i = 0; i < m; ++i) {
    int a, b, c;
    cin >> a >> b >> c;
    graph[a][b] = c;
    graph[b][a] = c;
  }
  
  int maxSum = 0;
  vector<bool> visited(n + 1, false);
  
  for (int i = 1; i <= n; ++i) {
    dfs(i, 0, maxSum, graph, visited);
  }
  
  cout << maxSum << endl;
}