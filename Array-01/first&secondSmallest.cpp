
class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        vector<int> ans;
        ans.push_back(arr[arr.length()-1]);
        ans.push_back(ans[arr.length()-2]);
        return ans;
    }
};