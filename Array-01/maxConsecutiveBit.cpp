class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int curr=0;
        int Max=0;
        
        for(int i=1;i<arr.size();i++){
            if((arr[i]==1 || arr[i]==0)   && arr[i]==arr[i-1]){curr++;
                 Max=max(Max,curr);
            }
            else curr=0;
           
                
            
            
        }
        return Max+1;
    }
};