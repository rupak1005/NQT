class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        vector<int> ans;
        for(int i=0;i<=arr.size()-k;i++){
            bool found=false;
            for(int j=i;j<i+k;j++){
                if(arr[j]<0){
                    ans.push_back(arr[j]);
                    found=true;
                    break;
                }
                
            }
            if(!found)ans.push_back(0);
        }
        return ans;
    }
};