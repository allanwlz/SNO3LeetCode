
// @Title: 生命游戏 (Game of Life)
// @Author: user3919vu
// @Date: 2020-06-17 22:14:36
// @Runtime: 0 ms
// @Memory: 6.9 MB

class Solution {
public:
    int m, n;
    void calc(int i, int j, vector<vector<int>>& board){
        int count = 0;
        for (int p = i - 1; p <= i + 1; p++){
            for (int q = j - 1; q <= j + 1; q++){
                if ((p == i && q == j) || p == -1 || p == m || q == -1 || q == n) continue;
                if (board[p][q] == 1 || board[p][q] == 2) count++;
            }
        }
        if (board[i][j] == 0 && count == 3) board[i][j] = 3;
        if (board[i][j] == 1 && (count < 2 || count > 3)) board[i][j] = 2;
    }
    void gameOfLife(vector<vector<int>>& board) {
        m = board.size();
        n = board[0].size();
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                calc(i, j, board);
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                board[i][j] %= 2;
    }
};
