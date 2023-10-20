class Solution
{
    static int majorityElement(int a[], int size)
    {
        if(size==1){
            return a[0];
        }
        int middle=size/2;
        int ans =0;
        int count=1;
        Arrays.sort(a);
        for(int i=0;i<size-1;i++){
            if(a[i]==a[i+1]){
                count++;
                if(count>middle){
                return a[i];
            }
            }else{
                count=1;
            }
            
        }
        return -1;
        
    }
}
