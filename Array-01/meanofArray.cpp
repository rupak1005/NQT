class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int sum=0;
        for(auto i:arr)sum+=i;
        
        return sum/arr.size();
    }
};