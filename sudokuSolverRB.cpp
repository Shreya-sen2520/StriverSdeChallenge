bool isValid(int board[][9], int val, int row, int col) {
    
    for(int i = 0; i < 9; i++) {
        if(board[i][col] == val) return false;

        if(board[row][i] == val) return false;
    }

    
    row -= (row % 3);
    col -= (col % 3);

    for(int r = row; r < row + 3; r++) {
        for(int c = col; c < col + 3; c++) {
            if(board[r][c] == val) return false;
        }
    } 

    return true;
}

bool solve(int board[][9], int row, int col) {
    // base case
    if(row == 9) return true;

    if(col == 9) return solve(board, row + 1, 0); // move to first position in next row

    // if valid number
    if(board[row][col] != 0) return solve(board, row, col + 1); // move to next position

    // now check if any number from 1 to 9 is valid for current position
    for(int i = 1; i <= 9; i++) {
        if(isValid(board, i, row, col)) {
            board[row][col] = i;

            if(solve(board, row, col + 1)) return true; // check for next postion if all positions are valid return true

            board[row][col] = 0;
        }
    }

    return false; // can't solve given suduko
}

bool sudokuSolver(int board[][9]) {
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Don't print output and return output as specified in the question
    */

    return solve(board, 0, 0);
}
