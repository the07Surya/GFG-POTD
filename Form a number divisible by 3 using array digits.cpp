class Solution {
  public:
    int isPossible(int N, int arr[]) {
        long r=0;
        for(int i=0; i<N; i++)
            r += arr[i]%3;
        return r%3==0;
    }
};
