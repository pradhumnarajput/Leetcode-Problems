class Solution {
public:
    
    void solve(int i, int k, int n, vector<int> &temp, vector<vector<int>> &ans, int sum){
        
//        // if(sum > n) return;
        
        // if(k == 0){
        //     if(sum == n) ans.push_back(temp);
        //     return;
        // }
        
        if(k < 0) return;

        if(sum == n){
            if(k == 0) ans.push_back(temp);
            return;
        }

        if(i == 10) return;

        sum += i;
        temp.push_back(i);
        solve(i+1, k-1, n, temp, ans, sum);
        sum -= i;
        temp.pop_back();
        
        solve(i+1,k,n,temp,ans,sum);
        
        
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(1,k,n,temp,ans,0);
        return ans;
    }
};