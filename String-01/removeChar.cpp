// User function template for c++
class Solution {
  public:
    string removeChars(string str1, string str2) {
        // code here
        string ans;
        
        for(auto i:str1){
            if(str2.find(i)==string::npos){
                ans+=i;
            }
        }
        return ans;
    }
};
