 int kthSmallest(int arr[], int l, int r, int k) {
        //code here
         priority_queue<int> maxheap;
         for(int i=0;i<k;i++){
             maxheap.push(arr[i]);
         }
         for(int i=k;i<=r;i++){
             if(arr[i]<maxheap.top()){
                 maxheap.pop();
                 maxheap.push(arr[i]);
             }
             
         }
         return maxheap.top();
    }
