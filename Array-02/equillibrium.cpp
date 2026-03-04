// User function template for C++
class Solution {
  public:
    string equilibrium(vector<int> &arr) {
        // code here
        int total_sum=0;
        for(int i:arr){
            total_sum+=i;
        }
        int left_sum=0;
        for(int i=0;i<arr.size();i++){
            total_sum-=arr[i];//right sum
            
            if(total_sum==left_sum){
                return "true";
            }
            left_sum+=arr[i];
        }
        return "false";
    }
};