class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int,int>nge;
        
        stack<int> st;
        
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && st.top() <= nums2[i]){
                st.pop();
            }
            
            if(!st.empty()){
                nge[nums2[i]] = st.top();
            }
            else nge[nums2[i]] = -1;
            
            st.push(nums2[i]);
        }
        
//         for(auto i: nge){
//             cout << i.first << " " << i.second << endl;
//         }
        
        int m = nums1.size();
        vector<int> ans;
        for(int i = 0; i < m; i++){
            ans.push_back(nge[nums1[i]]);
        }
        return ans;
    }
};