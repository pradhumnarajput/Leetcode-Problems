class Solution {
public:
    
    int pascal(int row, int col){
        if(col == 0 || col == row) return 1;
        return pascal(row-1,col) + pascal(row-1,col-1);
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i = 0; i < numRows; i++){
            ans[i].resize(i+1, 1);
            for(int j = 1; j < i; j++){
                ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
            }
        }
        
        return ans;
    }
};