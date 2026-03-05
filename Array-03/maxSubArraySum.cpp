class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxsum=INT_MIN;
        int currsum=0;
        for(auto i:arr){
            currsum+=i;
            maxsum=max(maxsum,currsum);
            
            if(currsum<0){
                currsum=0;
            }
            
        }
        return maxsum;
    }
};