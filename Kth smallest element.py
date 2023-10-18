class Solution:
    def kthSmallest(self,arr, l, r, k):
        
        heapq.heapify(arr)
        for i in range(k-1):
            heapq.heappop(arr)
        return heapq.heappop(arr)
