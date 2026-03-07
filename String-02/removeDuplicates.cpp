// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        string ans;
        vector<int> vec(256,0);
        for(auto i:s){
            if(!vec[i]){
                ans+=i;
                vec[i]=1;
            }
        }
        return ans;
    }
};