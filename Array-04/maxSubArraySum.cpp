class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int maxsum=0;
        
        for(int i=0;i<k;i++){
            maxsum+=arr[i];
        }
        int windowsum=maxsum;
        for(int i=k;i<arr.size();i++){
            windowsum+=arr[i]-arr[i-k];
            maxsum=max(maxsum,windowsum);
        }
        return maxsum;
    }
};