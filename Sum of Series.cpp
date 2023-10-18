class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) {
	      long totalSum = (long)n * (n + 1) / 2;
        return totalSum;
	}
};
