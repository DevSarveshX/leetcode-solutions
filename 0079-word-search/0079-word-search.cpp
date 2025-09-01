// class Solution {
// public:
//     bool exist(vector<vector<char>>& matrix, string word) {
//         int row = matrix.size();
//         int col = matrix[0].size();
//         int n = word.size();
//         for (int i = 0; i < row; i++) {
//             for (int j = 0; j < col; j++) {
//                 int index = 0;
//                 int k = j;

//                 while (k < col && index < n && matrix[i][k] == word[index]) {
//                     index++;
//                     k++;
//                 }

//                 if (index == n) return true; 
//             }
//         }

        
//         for (int j = 0; j < col; j++) {
//             for (int i = 0; i < row; i++) {
//                 int index = 0;
//                 int k = i;

//                 while (k < row && index < n && matrix[k][j] == word[index]) {
//                     index++;
//                     k++;
//                 }

//                 if (index == n) return true;  
//             }
//         }

//         return false;
//     }
// };
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int R = board.size();
        if (R == 0) return false;
        int C = board[0].size();
        int L = word.size();
        if (L == 0) return true;
        if (L > R * C) return false;

      
        const int dr[4] = {1, -1, 0, 0};
        const int dc[4] = {0, 0, 1, -1};

      
        for (int sr = 0; sr < R; ++sr) {
            for (int sc = 0; sc < C; ++sc) {
                if (board[sr][sc] != word[0]) continue;

                vector<vector<bool>> vis(R, vector<bool>(C, false));

                struct Frame { int r, c, idx, dir; };
                vector<Frame> st;

                st.push_back({sr, sc, 0, 0});
                vis[sr][sc] = true;

                while (!st.empty()) {
                    Frame &cur = st.back();

                   
                    if (cur.idx == L - 1) return true;

                   
                    if (cur.dir == 4) {
                        vis[cur.r][cur.c] = false;
                        st.pop_back();
                        continue;
                    }

                   
                    int k = cur.dir++;
                    int nr = cur.r + dr[k];
                    int nc = cur.c + dc[k];

                    
                    if (nr < 0 || nr >= R || nc < 0 || nc >= C) continue;
                    if (vis[nr][nc]) continue;
                    if (board[nr][nc] != word[cur.idx + 1]) continue;

                   
                    vis[nr][nc] = true;
                    st.push_back({nr, nc, cur.idx + 1, 0});
                }
            }
        }
        return false;
    }
};