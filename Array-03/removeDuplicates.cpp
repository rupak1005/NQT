class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        
        vector<int> ans;
        unordered_set<int> seen;

        for(auto i : arr){
            if(seen.find(i) == seen.end()){
                ans.push_back(i);
                seen.insert(i);
            }
        }

        return ans;
    }
};