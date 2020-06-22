
// @Title: 单词搜索 (Word Search)
// @Author: user3919vu
// @Date: 2020-06-08 11:30:32
// @Runtime: 24 ms
// @Memory: 8.1 MB

class Solution {
public:
    bool DFS(vector<vector<char>>& board, string& word, int index, int i, int j){
        if (board[i][j] != word[index]) return false;
        if (index == word.size() - 1) return true;
        board[i][j] = ' ';
        if ((i > 0 && DFS(board, word, index + 1, i - 1, j))
            || (j > 0 && DFS(board, word, index + 1, i, j - 1))
            || (i < board.size() - 1 && DFS(board, word, index + 1, i + 1, j))
            || (j < board[0].size() - 1 && DFS(board, word, index + 1, i, j + 1)))
            return true;
        board[i][j] = word[index];
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        if(board.empty() || board[0].empty()) return false;
        for(auto i = 0; i < board.size(); i++) 
            for(auto j = 0; j < board[0].size(); j++)
                if (DFS(board, word, 0, i, j)) return true; 
        return false;
    }
};
