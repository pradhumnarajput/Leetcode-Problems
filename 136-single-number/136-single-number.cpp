class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n-1; i++){
            nums[i+1] = nums[i] ^ nums[i+1];
        }
        return nums[n-1];
    }
};