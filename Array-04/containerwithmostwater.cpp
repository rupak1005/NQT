class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int l=0,r=arr.size()-1;
        int currArea=0;
        int maxArea=0;
        while(l<r){
            currArea=(r-l)*min(arr[l],arr[r]);
            maxArea=max(maxArea,currArea);
            if(arr[l]<arr[r]){
                l++;
            }else r--;
        }
        
        return maxArea;
    }
};