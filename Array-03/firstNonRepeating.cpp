
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // Complete the function
        
        unordered_map<int,int> mp;
        for(auto i:arr){
            mp[i]++;
        }
        
        // for(auto i:mp){
        //     if(i.second==1)return i.first;
        // }  dont traverse the map traverse the array as the map store the value in sorted order of values.
        
        for(auto i:arr){
            if(mp[i]==1)return i;
        }
        return 0;
    }
};
