class Solution:
    def countFriendsPairings(self, n):
        # code here 
        mod = 10**9+7
        dp = [0]*(n+1)
        dp[0] = 1
        dp[1] = 1
        for i in range(2,n+1) :
            dp[i] = (dp[i-1]+(i-1)*dp[i-2])%mod
            
        return dp[n]
