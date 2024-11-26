class Solution {
    public boolean isValidSudoku(char[][] board) {
        Set<Character> st = new HashSet<>(); 
        int cnt = 0;
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                char digit = board[i][j];
                if(digit != '.'){
                     // Checks Horizontally
                    for(int h = 0; h < 9; h++){
                        if(h == j || board[i][h] == '.') continue;
                        if(digit == board[i][h]) return false;
                    }
                    // Checks Vertically
                    for(int v = 0; v < 9; v++){
                        if(v == i ||  board[v][j] == '.') continue;
                        if(digit == board[v][j]) return false;
                    }
                }
               
                // Same Square
                if(i % 3 == 0 && j % 3 == 0){
                    for(int os = i; os < i + 3; os++){
                        for(int is = j; is < j + 3; is++){
                            if(board[os][is] == '.'){
                                cnt++;
                                continue;
                            }
                            st.add(board[os][is]);
                        }
                    }
                    if(st.size() + cnt < 9) return false;
                    st.clear();
                    cnt = 0;
                }
            }
        }
        return true;
    }
}