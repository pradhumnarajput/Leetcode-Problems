class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int flag = 0;
        int temp = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                ans = max(ans, temp);
                temp = 0;
                flag = 0;
            }
            if(nums[i] == 1) flag = 1;
            
            if(flag == 1 && nums[i] == 1){
                temp++;
            }
        }
        if(temp > 0) ans = max(ans, temp);
        return ans;
    }
};