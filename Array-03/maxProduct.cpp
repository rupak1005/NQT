class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int maxproduct=arr[0];
        int minproduct=arr[0];
        int ans=arr[0];
        
        for(int i=1;i<arr.size();i++){
            if(arr[i]<0)swap(maxproduct,minproduct);
            
            maxproduct=max(arr[i],arr[i]*maxproduct);
            minproduct=min(arr[i],arr[i]*minproduct);
            ans=max(maxproduct,ans);
        }
        
        
        return ans;
    }
};