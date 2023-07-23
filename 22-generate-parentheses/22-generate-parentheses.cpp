class Solution {
public:
    
    void solve(int left, int right, vector<string> &ans, string &temp){
        if(left == 0 && right == 0){
            ans.push_back(temp);
        }
        
        if(left > right || left < 0 || right < 0){
            return;
        }
        
        temp.push_back('(');
        solve(left-1, right, ans, temp);
        temp.pop_back();
        temp.push_back(')');
        solve(left, right-1, ans, temp);
        temp.pop_back();
    }
        
        
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp = "";
        solve(n,n,ans,temp);
        return ans;
    }
};