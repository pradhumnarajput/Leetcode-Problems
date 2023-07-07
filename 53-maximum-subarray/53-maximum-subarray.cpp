class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int mx_sum = 0;
        int curr = 0;
        for(int i = 0; i < n; i++){
            curr += nums[i];
            if(curr > mx_sum) mx_sum = curr;
            else if(curr < 0) curr = 0;
        }
        if(mx_sum == 0){
            return *max_element(nums.begin(), nums.end());
        }
        return mx_sum;
    }
};