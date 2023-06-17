class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int temp = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0) temp++;
            else{
                int t = nums[i];
                nums[i] = 0;
                nums[i-temp] = t;
            }
        }
    }
};