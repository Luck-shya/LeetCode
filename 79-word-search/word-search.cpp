class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if (search(board, word, 0, i, j)) // Start the search from each cell
                    return true;
            }
        }
        return false;
    }
    
    bool search(vector<vector<char>>& board, string& word, int index, int i, int j) {
        if (index == word.size()) // All characters of word found
            return true;
        
        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[index])
            return false;
        
        char temp = board[i][j]; // Temporarily mark the cell as visited
        board[i][j] = '*';
        
        // Check adjacent cells
        bool found = search(board, word, index + 1, i + 1, j) ||
                     search(board, word, index + 1, i - 1, j) ||
                     search(board, word, index + 1, i, j + 1) ||
                     search(board, word, index + 1, i, j - 1);
        
        board[i][j] = temp; // Restore the original character
        return found;
    }
};
