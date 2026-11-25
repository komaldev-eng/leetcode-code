class Solution {
public:
    class OrangePair {
    public:
        int row;
        int col;
        int time;

        OrangePair(int r, int c, int t) {
            row = r;
            col = c;
            time = t;
        }
    };
    void BFS(vector<vector<int>>& grid, int row, int col, int time,
             queue<OrangePair>& q) {
        int n = grid.size();
        int m = grid[0].size();
        if (row < 0 || col < 0 || row >= n || col >= m) {
            return;
        }
        if (grid[row][col] != 1) {
            return ;
        }
        grid[row][col] = 2;

        q.push(OrangePair(row, col, time + 1));
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<OrangePair> q;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push(OrangePair(i, j, 0));
                }
            }
        }
        int time = 0;

        while (!q.empty()) {

            OrangePair rv = q.front();
            q.pop();

            time = rv.time;

            BFS(grid, rv.row - 1, rv.col, time, q);
            BFS(grid, rv.row, rv.col - 1, time, q);
            BFS(grid, rv.row + 1, rv.col, time, q);
            BFS(grid, rv.row, rv.col + 1, time, q);
        }
    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                return -1;
            }
        }
    }

    return time;
}
}
;