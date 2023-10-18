@easy c++ sol
class Solution
{
public:
//int mod = 1000000007;
        
    long long  solve(int n , vector<int>& dp)
    {  int mod = 1000000007;
        
        if(n==1)
        return 1;
        if(n==2)
        return 2;
        if(dp[n]!=-1)
        return dp[n];
        
        int r = solve(n-1, dp)*1%mod + ((n-1)*(solve(n-2, dp)%mod))%mod;
        return  dp[n]=r%mod;
        
    }
    int countFriendsPairings(int n) 
    { 
        vector<int>dp(n+1, -1);
        int x= solve(n , dp);
        return  x;
    }
};
