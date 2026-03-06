class Solution {
  public:
    string toggleCase(string &s) {
        // code here
        string ans;
        for(auto i :s){
            if(islower(i)){
                ans+=toupper(i);
            }else{
                ans+=tolower(i);
            }
        }
        return ans;
    }
};