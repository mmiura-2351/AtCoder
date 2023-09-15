#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using str=string;
#define rep(i, n) for (int i = 0; (i) < (n); ++(i))
#define all(a) (a).begin(), (a).end()
#define inputarr(arr, size) do {for (size_t i = 0; i < size; ++i) { cin >> arr[i]; }} while (0)
#define printarr(arr, size) do {for (size_t i = 0; i < size; ++i) { cout << arr[i]; if (i != size - 1) cout << " ";} cout << endl;} while (0)

template <typename... Args>
void input(Args&... args) {
    ((cin >> args), ...);
}

template <typename... Args>
void print(Args... args) {
    ((cout << args << " "), ...);
}

template <typename... Args>
void println(Args... args) {
    print(args...);
    cout << endl;
}









bool contains(const string& haystack, const string& needle) {
    return haystack.find(needle) != string::npos;
}

int sum (vector<int> v){
    int sum = 0;
    for (int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return sum;
}

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