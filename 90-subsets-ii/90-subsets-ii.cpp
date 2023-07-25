class Solution {
public:
    
    void solve(vector<int>& nums, set<vector<int>> &s, int i, int n, vector<int> temp){
        if(i == n){
            s.insert(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(nums,s,i+1,n,temp);
        temp.pop_back();
        solve(nums,s,i+1,n,temp);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        vector<int> temp;
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        solve(nums, s, 0, n, temp);
        for(auto i: s){
            ans.push_back(i);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};