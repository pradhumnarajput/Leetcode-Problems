class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(auto i: nums1){
           v.push_back(i); 
        } 
        for(auto i: nums2){
            v.push_back(i);
        }
        sort(v.begin(),v.end());
        int n = v.size();
        double ans;
        if(n % 2 != 0){
            ans = v[n/2];
        }
        else{
            ans = (v[n/2] + v[n/2 - 1]) / 2.0;
        }
        return ans;
    }
};
