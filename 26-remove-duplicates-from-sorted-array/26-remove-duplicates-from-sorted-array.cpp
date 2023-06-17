class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int cnt = 1;
        int i = 0;
        int j = i + 1;
        while(j < n){
            if(nums[j] == nums[i]){
                j++;
            }
            else{
                nums[++i] = nums[j++];
                cnt++;
            }
        }
        return cnt;
    }
};