class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        // if(n == 1 && m == 1){
        //     if(matrix[0][0] == target) return true;
        //     else return false;
        // }
        int low = 0;
        int high = m * n - 1;
        while(low <= high){
            int mid =  low + (high - low) / 2;
            int midi = mid/m;
            int midj = mid%m;
            
            if(matrix[midi][midj] == target){
                return true;
            }
            else if (matrix[midi][midj] < target) low = mid + 1;
            else high = mid - 1;
        }
        return false;
    }
};