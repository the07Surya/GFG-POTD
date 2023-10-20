class Solution {
    static int isPossible(int N, int arr[]) {
        // code here
        int digitSum = 0;
        for(int n : arr){
            digitSum += getSum(n);
        }
        return (digitSum%3 == 0)? 1 : 0;
        
    }
    
    static int getSum(int n){
        int sum = 0;
        while(n>0){
            sum += n%10;
            n/=10;
        }
        return sum;
    }
}
