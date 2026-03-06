class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int ans=0;
        int l=0,r=arr.size()-1;
        int rmax=0;
        int lmax=0;
        while(l<r){
            lmax=max(lmax,arr[l]);
            rmax=max(rmax,arr[r]);
            
            
            if(lmax<rmax){
                ans+=lmax-arr[l];
                l++;
            }else{
                ans+=rmax-arr[r];
                r--;
            }
        }
        return ans;
    }
};