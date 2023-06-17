class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> s;
        for(int i = 0; i < n; i++){
            s.insert(nums[i]);
        }
        
        int j = 0;
        for(auto i: s){
            nums[j++] = i;
        }
        return s.size();
    }
};