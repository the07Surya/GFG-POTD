class Solution{
  public:
    int majorityElement(int a[], int size)
    {
          unordered_map<int, int> ump;
        for(int i=0;i<size;i++){
            ump[a[i]]++;
        }
        for(auto it:ump){
            if(it.second > size/2)
            return it.first;
        }
        return -1;
        
    }
};
