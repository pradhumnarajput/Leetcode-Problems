class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long l = 0, r = 0, ans = 0, total = 0;;
        int n = nums.size();
        while(r < n){
            total += nums[r];
            while(nums[r] * (r-l+1) > k + total){
                total -= nums[l];
                l++;
            }
            ans = max(ans, (r-l+1));
            r++;
        }
        return ans;
    }
};