class Solution {
  public:
    vector<int> sortA1ByA2(vector<int> a1, int N, vector<int> a2, int M) {
        
        unordered_map<int,int> freq;
        
        for(int x : a1)
            freq[x]++;
        
        vector<int> ans;
        
        // place elements according to a2
        for(int x : a2){
            if(freq.count(x)){
                while(freq[x]--){
                    ans.push_back(x);
                }
                freq.erase(x);
            }
        }
        
        // remaining elements
        vector<int> rest;
        
        for(auto it : freq){
            while(it.second--){
                rest.push_back(it.first);
            }
        }
        
        sort(rest.begin(), rest.end());
        
        for(int x : rest)
            ans.push_back(x);
        
        return ans;
    }
};