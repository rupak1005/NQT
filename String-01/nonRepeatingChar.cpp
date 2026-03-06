
class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        
        unordered_map<char,int> freq;
        for(auto i:s){
            freq[i]++;
            
        }
        
        for(auto i:s){
            if(freq[i]==1)return i;
        }
        return '$';
    }
};