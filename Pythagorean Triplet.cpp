class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    map<int,int> mp;
        for(int i=0;i<n;i++){
            int sq=arr[i]*arr[i];
            mp[sq]++;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sqsum=(arr[i]*arr[i])+(arr[j]*arr[j]);
                if(mp.find(sqsum)!=mp.end()){
                    return true;
                }
            }
        }
        return false;
	}
};
