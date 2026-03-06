// User function template for C++

class Solution {
  public:
    string removeSpecialCharacter(string s) {
        // code here
        string ans;
        for(auto i:s){
            if(isalpha(i)){
                ans+=i;
            }
        }
        if(ans.empty())return "-1";
        else return ans;
    }
};