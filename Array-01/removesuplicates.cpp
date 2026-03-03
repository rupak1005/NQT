class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        set<int> set;
        vector<int> ans;
        for(auto i:arr){
            set.insert(i);
        }
        
        
        
        
        
        for(auto i:set){
            ans.push_back(i);
        }
        return ans;
    }
};