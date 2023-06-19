class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = -1;
        map<int,int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        for(int i = 0; i <= n; i++){
            if(mp[i] < 1){
                ans = i;
                break;
            }
        }
        return ans;
    }
};