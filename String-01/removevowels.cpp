// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        string ans;
        // Your code goes here
        for(auto i :s){
            if(string("aeiou").find(tolower(i))==string::npos){
                ans+=i;
            }
        }
        return ans;
    }
};