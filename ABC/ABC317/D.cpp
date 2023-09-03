#include <bits/stdc++.h>
using namespace std;

int bfs(vector<vector<char>> &grid, int h, int w) {
  const int INF = 1e9;
  vector<vector<int>> dist(h, vector<int>(w, INF));
  queue<pair<int, int>> que;
  int sx, sy, gx, gy;

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      if (grid[i][j] == 'S') {
        sx = i;
        sy = j;
      } else if (grid[i][j] == 'G') {
        gx = i;
        gy = j;
      }
    }
  }

  que.push({sx, sy});
  dist[sx][sy] = 0;

  int dx[] = {-1, 1, 0, 0};
  int dy[] = {0, 0, -1, 1};

  while (!que.empty()) {
    int x, y;
    tie(x, y) = que.front(); que.pop();

    // ゴールに到達した場合
    if (x == gx && y == gy) return dist[x][y];

    for (int dir = 0; dir < 4; ++dir) {
      int nx = x + dx[dir], ny = y + dy[dir];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
      if (grid[nx][ny] == '#') continue;

      // 人の視線チェック
      bool can_move = true;
      vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
      char arrow[] = {'^', 'v', '<', '>'};

      for (int d = 0; d < 4; ++d) {
        int dx = directions[d].first, dy = directions[d].second;
        for (int i = nx, j = ny; i >= 0 && i < h && j >= 0 && j < w; i += dx, j += dy) {
          if (grid[i][j] == '#') break;
          if (grid[i][j] == arrow[d]) {
            can_move = false;
            break;
          }
        }
        if (!can_move) break;
      }

      if (can_move && dist[nx][ny] == INF) {
        dist[nx][ny] = dist[x][y] + 1;
        que.push({nx, ny});
      }
    }
  }
  return -1;
}

int main(){
  int h, w;
  cin >> h >> w;

  vector<vector<char>> grid(h, vector<char>(w));
  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> grid[i][j];
    }
  }

  int result = bfs(grid, h, w);
  cout << result << endl;
}