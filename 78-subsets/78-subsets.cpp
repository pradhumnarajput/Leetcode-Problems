class Solution {
public:
    
    void solve(vector<vector<int>>& ans, vector<int> &nums , vector<int>& temp, int i, int n){
        if(i >= n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(ans, nums, temp, i+1, n);
        temp.pop_back();
        solve(ans, nums, temp, i+1, n);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans,nums, temp, 0, n);
        return ans;
    }
};