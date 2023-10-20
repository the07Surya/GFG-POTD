def isPossible(self, N, arr):
        # code here
        # Number divisible by 3 when the sum of its 
        # digits is divisble by 3
        if sum(arr)%3==0:
            return 1
        return 0
