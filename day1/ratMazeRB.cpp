void solve(vector<vector<int>> &mat,int n , int r, int c, string s ,vector<string> &ans){
    if(r < 0 || r >= n || c < 0 || c >= n || mat[r][c] == 0) return;
    if(r == n-1 && c== n-1){
        ans.push_back(s);
        return;
    }

    mat[r][c] = 0;
    solve(mat,n,r+1,c,s+"D",ans);
 
    solve(mat,n,r,c-1,s+"L",ans);
    
    solve(mat,n,r-1,c,s+"U",ans);
    solve(mat,n,r,c+1,s+"R",ans);

    mat[r][c] = 1;
}

vector<string> ratMaze(vector<vector<int>> &mat) {
    vector<string> ans;
    int n = mat.size();
    solve(mat,n,0,0,"",ans);
    return ans;
}
