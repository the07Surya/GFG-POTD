
class Solution {
    boolean checkTriplet(int[] arr, int n) {
        // code here
        HashSet<Integer>s=new HashSet<Integer>();
        for(int i=0; i<n; i++)
        {
           s.add(arr[i]*arr[i]); 
        }
        for(int i=0; i<n-1; i++)
        {
            // HashSet<Integer>s=new HashSet<Integer>();
            
            for(int j=i+1; j<n; j++)
            {
                if(s.contains((arr[i]*arr[i]+arr[j]*arr[j])))
                {
                    return true;
                }
                
            }
            
        }
        return false;
    }
}
