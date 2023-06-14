class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_map<int,int> rows;
        unordered_map<int,int> cols;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        
         for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(rows[i] > 0 || cols[j] > 0) matrix[i][j] = 0;
            }
        }
    }
};