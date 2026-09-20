class Solution {
    private:
       unordered_map<int,int> dp;
public:
    int climbStairs(int n) {
        if(n<=1) return 1;
        if(dp.find(n)!=dp.end()) return dp[n];
        int ans=climbStairs(n-1)+climbStairs(n-2);
        dp[n]=ans;
        return ans;
    }
};