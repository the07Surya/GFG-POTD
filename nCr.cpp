class Solution{
public:
    
    // Formulas 
    // 1. (a+b) %m = a%m + b%m;
    
    int nCr(int n, int r)
    {
        if(n<r) return 0;
        if((n-r)<r)
            r = n-r;

        int M = 1e9+7;
        vector<int> row(n+1, 1);
        
        for(int i = 2; i<=n; i++)
        {
            //updating 'i'th row
            for(int j=min(i-1, r); j>0; j--)
            {
                row[j] = (row[j]%M + row[j-1]%M)%M;
            }
        }
        return row[r];
        
    }
};
