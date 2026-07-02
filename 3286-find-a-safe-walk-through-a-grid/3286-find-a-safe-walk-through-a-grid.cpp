class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size(), n = grid[0].size();

        vector<vector<int>> best(m, vector<int>(n, -1));

        priority_queue<vector<int>> pq;

        int startHealth = health - grid[0][0];
        if (startHealth <= 0) return false;

        pq.push({startHealth, 0, 0});
        best[0][0] = startHealth;

        vector<int> dx = {1, -1, 0, 0};
        vector<int> dy = {0, 0, 1, -1};

        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();

            int h = curr[0];
            int x = curr[1];
            int y = curr[2];

            if (x == m - 1 && y == n - 1) return true;

            if (h < best[x][y]) continue;

            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                    int newHealth = h - grid[nx][ny];

                    if (newHealth > 0 && newHealth > best[nx][ny]) {
                        best[nx][ny] = newHealth;
                        pq.push({newHealth, nx, ny});
                    }
                }
            }
        }

        return false;
    }
};